#include "FileHandler.h"
#include "json.hpp"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <sstream>
using json = nlohmann::json;
using namespace std;

// this line is added for every data structure in header file otherwise error happens
unordered_map<string, User> FileHandler::usersData;
unordered_map<int,Transaction> FileHandler::transactionsData;
unordered_map<string,set<int>> FileHandler::senderData;
unordered_map<string,set<int>> FileHandler::recipientData;
unordered_map<string,set<int>> FileHandler::requests;


FileHandler::FileHandler() {
	loadUsersFromFile();
	loadTransactionsFromFile();
}

FileHandler::~FileHandler() {
	saveUsersToFile();
	saveTransactionsToFile();
}


void FileHandler::saveUsersToFile() {
	json jUsers;

	// Loop through all users and convert to JSON
	for (auto& i : usersData) {
		const string& username = i.first;
		const User& user = i.second;

		// Directly creating the user's JSON object without temporary variables
		jUsers[username] = {
			{"firstName", user.getFirstName()},
			{"lastName", user.getLastName()},
			{"username", user.getUsername()},
            {"email",user.getEmail()},
			{"password", user.getPassword()},
			{"balance", user.getBalance()},
			{"isSuspended", user.getSuspensionStatus()},
			{"phoneNumber", user.getPhoneNumber()},
			{"id", user.getId()},
			{"userfailedattempts",user.getuserfailedattempts()}
		};
	}

	// Write JSON to file in pretty-printed format
	ofstream saveinJson("usersData.json");

	if (saveinJson.is_open()) {
		saveinJson << setw(4) << jUsers;  // Pretty print with indentation
		saveinJson.close();
		cout << "Successfully saved user data to usersData.json.\n";
	}
	else {
		cerr << "Failed to open file for writing.\n";
	}
}

void FileHandler::saveTransactionsToFile() {
	json jTransactions = json::array();

    for (size_t i=1 ; i<=transactionsData.size();i++) {

        time_t transTime = chrono::system_clock::to_time_t(transactionsData[i].transactionTime);


        if(transactionsData[i].getId() != 0 && transactionsData[i].getRecipientUsername() != "") {
            jTransactions.push_back({
                {"recipient", transactionsData[i].getRecipientUsername()},
                {"sender", transactionsData[i].getSenderUsername()},
                {"amount", transactionsData[i].getAmount()},
                {"transTime", transTime},
                {"isApproved", transactionsData[i].getIsApproved()},
                { "id", transactionsData[i].getId() }
            });

        }

	}


	ofstream saveinJson("transactionsData.json");

	if (saveinJson.is_open()) {
		saveinJson << setw(4) << jTransactions;  // Pretty print with indentation
		saveinJson.close();
		cout << "Successfully saved user data to transactionsData.json.\n";
	}
	else {
		cerr << "Failed to open file for writing.\n";
	}
}

void FileHandler::loadUsersFromFile() {
	try {
		ifstream file("usersData.json");
		if (!file) throw runtime_error("File couldn't be opened.");

		json jUsers;
		file >> jUsers;

		//iterating on each user on json file
		for (const auto& i : jUsers.items()) {
			const string& username = i.key(); // el.key() will be the "username"
			const json& juser = i.value();  // el.value() contains the user object

			try {
				//  add users by the correct order
				User user(
					juser.at("firstName").get<string>(),
					juser.at("lastName").get<string>(),
					username,
					juser.at("password").get<string>(),
					juser.at("id").get<int>(),
                    juser.at("email").get<string>(),
					juser.at("phoneNumber").get<string>(),
					juser.at("balance").get<double>(),
					juser.at("isSuspended").get<bool>(),
					juser.at("userfailedattempts").get<bool>()
				);

				usersData[username] = user;  // Storing user in the map
			}
			catch (const json::exception& e) {
				cerr << "User '" << username << "' has invalid data: " << e.what() << '\n';
			}
		}

		cout << "Loaded user data successfully.\n";
	}
	catch (const exception& e) {
		cerr << "Failed to load usersData.json: " << e.what() << '\n';
	}
}

void FileHandler::loadTransactionsFromFile() {
	try {
		ifstream file("transactionsData.json");
		if (!file) throw runtime_error("File couldn't be opened.");

		json Jtransactions;
		file >> Jtransactions;

        for (const auto& t : Jtransactions)
		{


			time_t transTime = t.at("transTime").get<time_t>();
			chrono::system_clock::time_point timestamp = chrono::system_clock::from_time_t(transTime);

            cout << formatTimePoint(timestamp) << endl;

			try {
				Transaction loadedTransaction(
					t.at("recipient").get<string>(),
					t.at("sender").get<string>(),
					t.at("amount").get<double>(),
					timestamp,
					t.at("isApproved").get<bool>()
				);


			}
			catch (const json::exception& e) {
				cerr << "Error loading transaction " << e.what() << endl;
			}



        }

        cout << "Loaded transactions data successfully" << endl;
	}
	catch (const exception& e) {
		cerr << "Failed to load transactionsData.json: " << e.what() << '\n';
	}
}


// i used it for testing the format of time (for testing only)
string FileHandler::formatTimePoint(const chrono::system_clock::time_point& tp) {
	time_t time_c = chrono::system_clock::to_time_t(tp);
	tm local_tm{};
	localtime_s(&local_tm, &time_c);

	stringstream ss;
	ss << put_time(&local_tm, "%d-%m-%Y %H:%M:%S");
	return ss.str();
}

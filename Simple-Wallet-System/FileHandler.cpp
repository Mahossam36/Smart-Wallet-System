#include "FileHandler.h"
#include "json.hpp"
#include<fstream>
#include <iostream>
using json = nlohmann::json;
using namespace std;

// this line is added for every data structure in header file otherwise error happens
unordered_map<string, User> FileHandler::usersData;

FileHandler::FileHandler() {
	loadUsersFromFile();
}



FileHandler::~FileHandler() {
	saveUsersToFile();
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
			{"password", user.getPassword()},
			{"balance", user.getBalance()},
			{"isSuspended", user.getSuspensionStatus()},
			{"phoneNumber", user.getPhoneNumber()},
			{"id", user.getId()}
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
					juser.at("isSuspended").get<bool>(),
					juser.at("balance").get<double>(),
					juser.at("phoneNumber").get<string>()
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

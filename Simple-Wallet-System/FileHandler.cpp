#include "FileHandler.h"
#include "json.hpp"
#include<fstream>
#include <iostream>
using json = nlohmann::json;


// this line is added for every data structure in header file otherwise error happens
unordered_map<std::string, User> FileHandler::UserData;

FileHandler::FileHandler() {

	LoadUserFromJson();

}



FileHandler::~FileHandler() {

	SaveUserToJson();

}


void FileHandler::SaveUserToJson() {
	json jUsers;

	// Loop through all users and convert to JSON
	for (const auto& i : UserData) {
		const std::string& username = i.first;
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
	std::ofstream saveinJson("UserData.json");

	if (saveinJson.is_open()) {
		saveinJson << std::setw(4) << jUsers;  // Pretty print with indentation
		saveinJson.close();
		std::cout << "Successfully saved user data to UserData.json.\n";
	}
	else {
		std::cerr << "Failed to open file for writing.\n";
	}
}




void FileHandler::LoadUserFromJson() {
	try {
		std::ifstream file("UserData.json");
		if (!file) throw std::runtime_error("File couldn't be opened.");

		json jUsers;
		file >> jUsers;

		//iterating on each user on json file
		for (const auto& i : jUsers.items()) {
			const std::string& username = i.key(); // el.key() will be the "username"
			const json& juser = i.value();  // el.value() contains the user object

			try {
				//  add users by the correct order
				User user(
					juser.at("firstName").get<std::string>(),
					juser.at("lastName").get<std::string>(),
					username,
					juser.at("password").get<std::string>(),
					juser.at("id").get<int>(),
					juser.at("isSuspended").get<bool>(),
					juser.at("balance").get<double>(),
					juser.at("phoneNumber").get<std::string>()
				);

				UserData[username] = user;  // Storing user in the map
			}
			catch (const json::exception& e) {
				std::cerr << "User '" << username << "' has invalid data: " << e.what() << '\n';
			}
		}

		std::cout << "Loaded user data successfully.\n";
	}
	catch (const std::exception& e) {
		std::cerr << "Failed to load UserData.json: " << e.what() << '\n';
	}
}



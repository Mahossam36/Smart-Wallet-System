#include "UserManagement.h"
#include <iostream>
#include "FileHandler.h"
using namespace std;


// alias for the FileHandler static data 
auto& users = FileHandler::usersData;

bool UserManagement::searchAccount(const string& username, const string& password) {
	if (users.find(username) != users.end() && password == users[username].getPassword())
	{
		const User& user = users[username]; {
			if (user.getSuspensionStatus()) {
				cout << "Your account is found but suspended\n";
			}
			return true;
		}
	}
	return false;
}

void UserManagement::createAccount(const string& firstName, const string& lastName, //create the user and save it to the hashe table 
	const string& username, const string& password,
	const string& phoneNumber, int id) {

	//commented bec it is already integrated in the sign up
	/*if (users.find(username) != users.end()) {
		cout << "Sorry, username '" << username << "' already exists." << endl;
	}*/
	/*else*/ 
		User newUser(firstName, lastName, username, password, id, phoneNumber);
		users[username] = newUser;
		cout << "Account for '" << username << "' created successfully!" << endl;
	
}

void UserManagement::displayUser(const string& username) {
	if (users.find(username) != users.end()) {
		const User& user = users[username];
		cout << "Username: " << user.getUsername() << "\n";
		cout << "First Name: " << user.getFirstName() << "\n";
		cout << "Last Name: " << user.getLastName() << "\n";
		cout << "Phone Number: " << user.getPhoneNumber() << "\n";
		cout << "Balance: $" << user.getBalance() << "\n";
		cout << "ID: " << user.getId() << "\n";
		cout << "Suspended: " << (user.getSuspensionStatus() ? "Yes" : "No") << "\n";
	}
	else {
		cout << "User " << username << " not found." << endl;
	}
}

void UserManagement::suspendUser(const string& username) {
	if (users.find(username) != users.end()) {
		users[username].suspend();
		cout << "User '" << username << "' suspended successfully!" << endl;
	}
	else {
		cout << "User '" << username << "' not found." << endl;
	}
}
void UserManagement::activateUser(const string& username) {
	if (users.find(username) != users.end()) {
		users[username].activate();
		cout << "User '" << username << "' activated successfully!" << endl;
	}
	else {
		cout << "User '" << username << "' not found." << endl;
	}
}

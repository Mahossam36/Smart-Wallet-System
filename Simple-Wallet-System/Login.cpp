#include "Login.h"
#include "UserManagement.h"
#include "FileHandler.h"
#include "User.h"
#include <iostream>
using namespace std;

Admin Login::admin("master_control0", "J9T$4Ag@KhM");
int Login::totalFailedAttempts = 0;
const int Login::maxFailedAttempts = 3;
string Login::ActiveUser = "";//intail value of the active user is empty;

void Login::login(const string& username, const string& password) {

	// Admin login
	if (username == admin.getUsername() && password == admin.getPassword()) {
		cout << "Admin login successful!" << endl;
		totalFailedAttempts = 0; // reset attempts
		return;
	}

	// Search for user
	auto it = FileHandler::usersData.find(username);

	// If user not found
	if (it == FileHandler::usersData.end()) {
		//totalFailedAttempts++;
		cout << "Username not found." << endl;
		//cout << "Failed attempts: " << totalFailedAttempts << "/" << maxFailedAttempts << endl;

		/*if (totalFailedAttempts >= maxFailedAttempts) {
			cout << "Too many failed attempts. Access locked. Contact admin." << endl;
		}*/
		return;
	}
	else {

		// User found
		User& realUser = it->second;

		// Check if user is locked
		if (realUser.getuserfailedattempts() == false) {
			cout << "Your account is locked due to too many failed login attempts..." << endl;
			cout << "Try contacting the admin." << endl;
			return;//terminate the login 
		}

		// Username exists — now check password
		UserManagement userManagement;
		if (userManagement.searchAccount(username, password)) {
			totalFailedAttempts = 0;
			ActiveUser = realUser.getUsername();//saves the current user username for future uses 
			cout << "Login successful!" << endl;
		}
		else {
			totalFailedAttempts++;
			cout << "Invalid password." << endl;
			cout << "Failed attempts: " << totalFailedAttempts << "/" << maxFailedAttempts << endl;

			if (totalFailedAttempts >= maxFailedAttempts) {
				realUser.setuserfailedattempts(false); // Lock the account
				cout << "Your account is now locked due to too many failed login attempts." << endl;
			}
		}
	}
}

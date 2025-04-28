#include "SignUp.h"
#include "FileHandler.h"
#include "UserManagement.h"
#include <regex>
#include<iostream>
using namespace std;



bool SignUp::Uppercase = false;
bool SignUp::Lowercase = false;
bool SignUp::Specialchar = false;
SignUp::SignUp(string firstname, string lastname, string username, string password, string phonenumber, int id) {
	if (passChecker(password) && !userFound(username)&&DataValidation(firstname,lastname,phonenumber)) {
		UserManagement::createAccount(firstname, lastname, username, password, phonenumber, id);//create the user with the given data and save it to the hashe tabel 
		//the created user has a intial balance of 0  and the ban state is set to false 
	}
}

bool SignUp::passChecker(string password) {//checks if the password is strong -> contains UpperCase ,LowerCase ,Special char

	for (auto& c : password) {
		if (isupper(c)) {
			Uppercase = true;
		}
		else if (islower(c)) {
			Lowercase = true;
		}
		else if (!isalpha(c) && !isdigit(c)) {
			Specialchar = true;
		}
	}

	if (!(Uppercase && Lowercase && Specialchar)) {// one of the bool is false
		if (!Uppercase) {
			cout << "Password must contain at least one Uppercase" << endl;
		}
		if (!Lowercase) {
			cout << "Password must contain at least one Lowercase" << endl;
		}
		if (!Specialchar) {
			cout << "Password must contain at least one Special char" << endl;
		}
		Uppercase = false; Lowercase = false;  Specialchar = false;
		return false;
	}
	else {
		return true;
	}
}

bool SignUp::userFound(string username) {
	if (FileHandler::usersData.find(username) != FileHandler::usersData.end()) {
		cout << "Sorry, username '" << username << "' already exists." << endl;
		return true;
	}
	return false;
}

bool SignUp::DataValidation(string firstname, string lastname, string phonenumber){
	bool validFirstName = true;
	bool validlastName = true;
	bool validPhoneNumber = true;
	

	regex nameRegex("^[A-Za-z]+$");
	regex phoneRegex("^\\d{11}$");
	regex idRegex("^\\d+$");

	if (!regex_match(firstname, nameRegex)) {//Checks the First name is String 
		cout << "Invalid First Name!\n";
		validFirstName = false;
	}
	if (!regex_match(lastname, nameRegex)) {//Checks the Last name is String 
		cout << "Invalid Last Name!\n";
		validlastName = false;
	}
	if (!regex_match(phonenumber, phoneRegex)) {//Checks the PhoneNumber is 11 degit 
		cout << "Invalid Phone Number!\n";
		validlastName = false;
	}
	return validFirstName&& validlastName&& validPhoneNumber;
}

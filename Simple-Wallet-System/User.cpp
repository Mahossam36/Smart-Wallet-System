#include "User.h"
#include "FileHandler.h"

// Constructor 
User::User() {

};

User::User(const string& first, const string& last, const string& uname, const string& pass, int userId,
	bool isSus, double initialBalance, const string& phone) {
	firstName = first;
	lastName = last;
	username = uname;
	password = pass;
	id = userId;
	balance = initialBalance;
	phoneNumber = phone;
	isSuspended = isSus;

}


// Getters
string User::getFirstName() const {
	return firstName;
}

string User::getLastName() const {
	return lastName;
}

string User::getUsername() const {
	return username;
}

string User::getPassword() const {
	return password;
}

string User::getPhoneNumber() const {
	return phoneNumber;
}

double User::getBalance() const {
	return balance;
}

bool User::getSuspensionStatus() const {
	return isSuspended;
}

int User::getId() const {
	return id;
}


// Setters 
void User::setPassword(const string& newPass) {
	password = newPass;
}

void User::setBalance(double newBalance) {
	balance = newBalance;
}

void User::setId(int newId) {
	id = newId;
}

void User::setPhoneNumber(const string& newPhone) {
	phoneNumber = newPhone;
}

// change account state 

void User::suspend() {
	isSuspended = true;
}

void User::activate() {
	isSuspended = false;
}



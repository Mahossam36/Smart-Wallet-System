#include "User.h"
#include "FileHandler.h"


// Constructor
User::User() : firstName(""), lastName(""), username(""), password(""), balance(0.0), isSuspended(false), phoneNumber(""), id(0) {}

User::User(const std::string& first, const std::string& last, const std::string& uname, const std::string& pass,
    int userId, bool isSuspended, double initialBalance, const std::string& phone)
    : firstName(first), lastName(last), username(uname), password(pass), id(userId), isSuspended(isSuspended),
    balance(initialBalance), phoneNumber(phone) {

    FileHandler::UserData[uname] = *this;

}




// Getters (const methods)
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

double User::getBalance() const {
    return balance;
}

bool User::getSuspensionStatus() const {
    return isSuspended;
}

int User::getId() const {
    return id;
}

string User::getPhoneNumber() const {
    return phoneNumber;
}


// Setters
void User::setPassword(const string& newPassword) {
    password = newPassword;
}

void User::setBalance(const double& newBalance) {
    balance = newBalance;
}

void User::setPhoneNumber(const string& phone) {
    phoneNumber = phone;
}

void User::setId(const int& newId) {
	id = newId;
}

void User::suspend() {
    isSuspended = true;
}

void User::activate() {
    isSuspended = false;
}
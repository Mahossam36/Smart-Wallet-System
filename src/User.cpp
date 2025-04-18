#include "../include/User.h"

// Constructor
User::User(const string& first, const string& last, const string& uname, const string& pass, int userId, double initialBalance, const string& phone)
    : firstName(first), lastName(last), username(uname), password(pass), balance(initialBalance), isSuspended(false), phoneNumber(phone),id(userId) {}

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

void User::setBalance(double newBalance) {
    balance = newBalance;
}

void User::suspend() {
    isSuspended = true;
}

void User::activate() {
    isSuspended = false;
}

void User::setPhoneNumber(const string& phone) {
    phoneNumber = phone;
}

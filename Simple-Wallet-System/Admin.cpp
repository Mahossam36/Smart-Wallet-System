#include "Admin.h"

// Constructor
Admin::Admin(const string& uname, const string& pass)
    : username(uname), password(pass) {
}

// Getters
string Admin::getUsername() const {
    return username;
}

string Admin::getPassword() const {
    return password;
}

// Setters
void Admin::setPassword(const string& newPassword) {
    password = newPassword;
}

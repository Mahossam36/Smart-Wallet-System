#include "SignUp.h"
#include "FileHandler.h"
#include "UserManagement.h"
#include"mainwindow.h"
#include"ui_mainwindow.h"
#include"signupwindow.h"
#include"ui_signupwindow.h"
#include"Login.h"
#include <regex>
#include<iostream>
#include <QMessageBox>
using namespace std;



string SignUp::passChecker(string password) {
    bool Uppercase = false;
    bool Lowercase = false;
    bool Specialchar = false;

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

    string message = "";

    if (!(Uppercase && Lowercase && Specialchar)) {

        if (!Uppercase) {
            message += "Password must contain at least one Uppercase letter.\n";
        }
        if (!Lowercase) {
            message += "Password must contain at least one Lowercase letter.\n";
        }
        if (!Specialchar) {
            message += "Password must contain at least one Special character.\n";
        }
    }

    return message;
}

bool SignUp::userFound(string username) {
    if (FileHandler::usersData.find(username) != FileHandler::usersData.end()) {
        return true;
    }
    return false;
}


string SignUp::DataValidation(string firstname, string lastname, string phonenumber) {
    regex nameRegex("^[A-Za-z]+$");
    regex phoneRegex("^\\d{11}$");

    string message = "";

    if (!regex_match(firstname, nameRegex)) {
        message += "Invalid First Name! Only letters are allowed.\n";
    }
    if (!regex_match(lastname, nameRegex)) {
        message += "Invalid Last Name! Only letters are allowed.\n";
    }
    if (!regex_match(phonenumber, phoneRegex)) {
        message += "Invalid Phone Number! It must be exactly 11 digits.\n";
    }


    return message;
}




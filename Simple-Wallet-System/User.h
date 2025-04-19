#include <string>
using namespace std;

class User {
private:
    string firstName;
    string lastName;
    string username;
    string password;
    string phoneNumber;
    double balance;
    bool isSuspended;
    int id;

   
public:
    User();
    // Constructor
    User(const std::string& first, const std::string& last, const std::string& uname, const std::string& pass,
        int userId, bool isSuspended = false, double initialBalance = 0.0, const std::string& phone = "");

    // Getters
    string getFirstName() const;
    string getLastName() const;
    string getUsername() const;
    string getPassword() const;
    string getPhoneNumber() const;
    double getBalance() const;
    bool getSuspensionStatus() const;
    int getId() const;

    // Setters
    void setPassword(const string& newPassword);
    void setBalance(double newBalance);
    void setId(int newId);
    void setPhoneNumber(const string& phone);
    void suspend();
    void activate();
};

#pragma once

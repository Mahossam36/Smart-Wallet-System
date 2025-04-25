#pragma once
#include <string>


using namespace std;
class User
{
private:
	string firstName;
	string lastName;
	string username;
	string password;
	string phoneNumber;
	int id;
	double balance;
	bool isSuspended;


public:
	// constructor
	User();
	User(const string& first, const string& last, const string& uname, const string& pass, int userId,
		bool isSus = false, double initialBalance = 0.0, const string& phone = "");

	// Getters
	string getFirstName() const;
	string getLastName() const;
	string getUsername() const;
	string getPassword() const;
	string getPhoneNumber() const;
	int getId() const;
	double getBalance() const;
	bool getSuspensionStatus() const;


	// Setters
	void setPassword(const string& newPass);
	void setBalance(double newBalance);
	void setId(int newId);
	void setPhoneNumber(const string& newPhone);

	// change account state
	void suspend();
	void activate();
};


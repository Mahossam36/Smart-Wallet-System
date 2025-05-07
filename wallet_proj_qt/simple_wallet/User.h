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
	bool userfailedattempts;


public:
	// constructor
	User();
	User(const string& first, const string& last, const string& uname, const string& pass, int userId, const string& phone = ""
		, double initialBalance = 0.0, bool isSus = false ,bool flag=true);

	// Getters
	string getFirstName() const;
	string getLastName() const;
	string getUsername() const;
	string getPassword() const;
	string getPhoneNumber() const;
	int getId() const;
	double getBalance() const;
	bool getSuspensionStatus() const;
	bool getuserfailedattempts()const;


	// Setters
	void setPassword(const string& newPass);
	void setBalance(double newBalance);
	void setId(int newId);
	void setPhoneNumber(const string& newPhone);
	void setuserfailedattempts(bool x);

	// change account state
	void suspend();
	void activate();
};


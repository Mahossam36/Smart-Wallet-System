#pragma once
#include <string>
using namespace std;
class Admin
{
private:
	string username;
	string password;


public:
	// constructor
	Admin(const string& uname, const string& pass);

	// Getters
	string getUsername() const;
	string getPassword() const;

	// setters 
	void setPassword(const string& newPass);

};


#pragma once
#include <string>
using namespace std;


class UserManagement
{
public:
	static bool searchAccount(const string& username, const string& password);
	static void createAccount(const string& firstName, const string& lastName, const string& username,
		const string& password, const string& phoneNumber, double balance, int id);
	static void displayUser(const string& username);
	static void suspendUser(const string& username);
	static void activateUser(const string& username);
};


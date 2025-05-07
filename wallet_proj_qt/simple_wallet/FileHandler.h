#pragma once
#include <unordered_map>
#include <string>
#include "User.h"
#include "Transaction.h"
#include <vector>
using namespace std;

class FileHandler
{
	/* this class will contain the data and methods used to save and load from files */
private:
	void saveUsersToFile();
	void loadUsersFromFile();

	void saveTransactionsToFile();
	void loadTransactionsFromFile();

	string formatTimePoint(const chrono::system_clock::time_point& tp);

public:
	FileHandler();
	~FileHandler();
	static unordered_map<string, User> usersData;
	static vector<Transaction> transactionsData;

};


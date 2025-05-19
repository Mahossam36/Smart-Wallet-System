#pragma once
#include <map>
#include <unordered_map>
#include <string>
#include <set>
#include "User.h"
#include "Transaction.h"
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
    static unordered_map<int,Transaction> transactionsData;
    static unordered_map<string,set<int>>  senderData;
    static unordered_map<string,set<int>>  recipientData;
    static unordered_map<string,set<int>> requests;




};


#pragma once
#include <unordered_map>
#include <string>
#include "User.h"
using namespace std;

class FileHandler
{
	/* this class will contain the data and methods used to save and load from files */
private:
	void saveUsersToFile();
	void loadUsersFromFile();

public:
	FileHandler();
	~FileHandler();
	static unordered_map<string, User> usersData;

};


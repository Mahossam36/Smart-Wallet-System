#include <iostream>
#include "User.h"
#include "Admin.h"
#include "FileHandler.h"
#include "UserManagement.h"
#include "Transaction.h"
#include <iomanip>
using namespace std;

int main()
{
	FileHandler file;

	UserManagement::createAccount("John", "Doe", "johndoe1", "password123", "123-456-7890", 2000.0, 1);
	UserManagement::createAccount("John", "Doe", "johndoe2", "password123", "123-456-7891", 2400.0, 2);
	UserManagement::createAccount("John", "Doe", "johndoe3", "password123", "123-456-7895", 2700.0, 3);
	UserManagement::createAccount("John", "Doe", "johndoe44", "password123", "123-456-7895", 6700.0, 4);


	UserManagement::displayUser("johndoe2");
	UserManagement::activateUser("johndoe2");

	// testing printing transactions data and time in correct format
	/*for (auto& i : FileHandler::transactionsData)
	{
		cout << i.getId() << endl;
		cout << i.getRecipientUsername() << endl;
		cout << i.getSenderUsername() << endl;
		time_t time = chrono::system_clock::to_time_t(i.transactionTime);
		cout << put_time(localtime(&time), "%d-%m-%Y %H:%M:%S") << endl;

	}*/

	return 0;
}


#include <iostream>
#include "User.h"
#include "Admin.h"
#include "FileHandler.h"
#include "UserManagement.h"
#include "Transaction.h"
#include <iomanip>
#include "Login.h"
#include "SignUp.h"
using namespace std;

int main()
{
	FileHandler file;//load the data at the start of the program 
	bool end = false;//set it to true if you want to terminate the program
	int ans;//program selector 
	string firstname, lastname, username, password, phonenumber;
	int id;
	
	
	
	do {
		cout << "Welcome to Simple-Wallet-System \n 1-Log in \n 2-Sign up \n 3-Exit" << endl;
		cin >> ans;
		system("cls"); //clear the cmd "visual thing ig wont affect the code 

		if (ans == 1) {
			//Login code
			cout << "Enter your Username" << endl;
			cin >> username;
			cout << "Enter your password" << endl;
			cin >> password;
			Login::login(username, password);
		}

		if (ans == 2) {
			//Sign Up code 
			cout << "Enter your First name" << endl;
			cin >> firstname;
			cout << "Enter your Last name" << endl;
			cin >> lastname;
			cout << "Enter your Username" << endl;
			cin >> username;
			do {
				cout << "Enter your password" << endl;
				cin >> password;
			} while (!(SignUp::passChecker(password)));
			cout << "Enter your phonenumber" << endl;
			cin >> phonenumber;
			cout << "Enter your id" << endl;
			cin >> id;
			SignUp user(firstname, lastname, username, password, phonenumber, id);
		}

		if (ans == 3) {
			end = true;//end the program;
		}
	} while (!end);


	UserManagement::displayUser(Login::ActiveUser);//trying the activeuser string 
	return 0;
}


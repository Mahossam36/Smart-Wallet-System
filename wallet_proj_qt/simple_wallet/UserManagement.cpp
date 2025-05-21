#include "UserManagement.h"
#include <iostream>
#include "FileHandler.h"
#include<QMessageBox>
#include<sodium.h>
#include<iostream>
#include<string>
#include <sstream>
#include <iomanip>
using namespace std;


// alias for the FileHandler static data 
auto& users = FileHandler::usersData;
auto& transaction_data = FileHandler::transactionsData;

bool UserManagement::searchAccount(const string& username, const string& password) {
    string hashpass= hashPass(password);
    cout<<hashpass;
    if (users.find(username) != users.end() && hashpass == users[username].getPassword())
	{
		const User& user = users[username]; {
			if (user.getSuspensionStatus()) {
				cout << "Your account is found but suspended\n";
			}
			return true;
		}
	}
	return false;
}

void UserManagement::createAccount(const string& firstName, const string& lastName, //create the user and save it to the hashe table 
	const string& username, const string& password,
    const string& phoneNumber, const string& email, string & id) {

 string hashpass= hashPass(password);
    User newUser(firstName, lastName, username, hashpass, id,email, phoneNumber);
		users[username] = newUser;

	
}

void UserManagement::displayUser(const string& username) {
	if (users.find(username) != users.end()) {
        const User& user = users[username];
		cout << "Username: " << user.getUsername() << "\n";
		cout << "First Name: " << user.getFirstName() << "\n";
		cout << "Last Name: " << user.getLastName() << "\n";
		cout << "Phone Number: " << user.getPhoneNumber() << "\n";
        cout<<"Email: "<<user.getEmail()<<"\n";
		cout << "Balance: $" << user.getBalance() << "\n";
		cout << "ID: " << user.getId() << "\n";
		cout << "Suspended: " << (user.getSuspensionStatus() ? "Yes" : "No") << "\n";
	}
	else {
		cout << "User " << username << " not found." << endl;
	}
}

void UserManagement::suspendUser(const string& username) {
	if (users.find(username) != users.end()) {
		users[username].suspend();
		cout << "User '" << username << "' suspended successfully!" << endl;
	}
	else {
		cout << "User '" << username << "' not found." << endl;
	}
}
void UserManagement::activateUser(const string& username) {
	if (users.find(username) != users.end()) {
		users[username].activate();
		cout << "User '" << username << "' activated successfully!" << endl;
	}
	else {
		cout << "User '" << username << "' not found." << endl;
	}
}

void UserManagement::deleteUser(const string& username){
    //first we itearte on the transaction data and if found a sender or receiver with the same name replace it with deletedUser

    for(size_t i =1 ; i<=transaction_data.size();i++){
        if(transaction_data[i].getSenderUsername()==username){
            transaction_data[i].setSenderUsername("deletedUser");
        }
        if(transaction_data[i].getRecipientUsername()==username){
            transaction_data[i].setRecipientUsername("deletedUser");
        }

    }

    //second we itreate in the users data and if user found then erase this user
    auto it=users.begin();
    while(it!=users.end()){
        if(it->second.getUsername()==username){
            users.erase(it);
            break;
        }
        it++;
    }
}

string toHexString(const unsigned char* hash, size_t length) {
    std::ostringstream oss;
    oss << std::hex << std::setfill('0');
    for (size_t i = 0; i < length; ++i) {
        oss << std::setw(2) << static_cast<int>(hash[i]);
    }
    return oss.str();
}

string UserManagement::hashPass(const string& pass){
    if (sodium_init() == -1) {
        std::cerr << "Failed to initialize libsodium." << std::endl;
    }


    unsigned char hash[crypto_generichash_BYTES];

    crypto_generichash(
        hash, sizeof(hash),
        reinterpret_cast<const unsigned char*>(pass.c_str()), pass.length(),
        NULL, 0
        );
    return toHexString(hash ,sizeof(hash));
}


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
    set <int> combinedset(FileHandler::senderData[username]);//first we create the set
    combinedset.insert(FileHandler::recipientData[username].begin(),FileHandler::recipientData[username].end());//we mix it with the recipent set
    //now we have a set that have all the transactions of the user

    auto it = combinedset.begin();

    while(it!=combinedset.end()){
        if(transaction_data[*it].getSenderUsername()==username){
            transaction_data[*it].setSenderUsername("deletedUser");
        }
        if(transaction_data[*it].getRecipientUsername()==username){
            transaction_data[*it].setRecipientUsername("deletedUser");
        }
        it++;
    }

    //second we delete the user from the unorderd map
    FileHandler::usersData.erase(username);
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


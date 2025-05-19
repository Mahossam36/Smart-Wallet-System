#include "transactionsManagement.h"
#include "FileHandler.h"
#include <algorithm>
#include <vector>
#include <iostream>


auto& tmUsers = FileHandler::usersData;
auto& tmTransactions = FileHandler::transactionsData;
auto& sender_map = FileHandler::senderData;
auto& recipient_map = FileHandler::recipientData;
auto& tmRequests = FileHandler::requests;

set<int> transactionsManagement::last_transactions_of_user;



// sendMoney function output : 0 --> recipient user not found
//                             1 --> recipient user is suspended
//                             2 --> sender doesnot have enough money to send
//                             3 --> transaction done successfully
int transactionsManagement::sendMoney(string recipientUser, string senderUser, double amount) {
	if (tmUsers.find(recipientUser) == tmUsers.end()) {
		// recipient is not found (no user with such username) 
		return 0;
	}

	// check if user (recipient) found but suspended
	if (tmUsers.find(recipientUser) != tmUsers.end()) {
		if (tmUsers[recipientUser].getSuspensionStatus() == true) {
			return 1;
		}
	}

	// check senderUser if he got enough money to send
	if (tmUsers[senderUser].getBalance() < amount) {
		return 2;
	}

	// user has got enough money and recipient user is found and is an active user (perform transaction)
	tmUsers[senderUser].setBalance(tmUsers[senderUser].getBalance() - amount);
	tmUsers[recipientUser].setBalance(tmUsers[recipientUser].getBalance() + amount);
	Transaction newTransaction(recipientUser, senderUser, amount, chrono::system_clock::now(), true);
        return 3;
}



// function output : 0 --> sender is not found
//                   1 --> sender is suspended
//                   2 --> request sent succesfully
int transactionsManagement::requestMoney(string recipientUser, string senderUser, double amount) {
	// check if the sender is not found in users data
	if (tmUsers.find(senderUser) == tmUsers.end()) {
		return 0;
	}


	// check if sender is not suspended
	if (tmUsers.find(senderUser) != tmUsers.end()) {
		if (tmUsers[senderUser].getSuspensionStatus() == true) {
			return 1;
		}
	}


	// sender is found and active then request money
	// money is not transfered from sender to requester(recipient) till the sender approve the request
	// false flag in the transaction indicate uncompleted request
	Transaction newRequest(recipientUser, senderUser, amount, chrono::system_clock::now(), false);
	return 2;
}



// function output : 0 --> sender doesnot have enough  money and request is erased
//					 1 --> sender rejected the request 
//					 2 --> request is approved and money is transfered
int transactionsManagement::approveRequest(int requestID, bool reject) {
    Transaction request = tmTransactions[requestID];

    string recipientUser = request.getRecipientUsername();
    string senderUser = request.getSenderUsername();
    double amount = request.getAmount();

    // sender reject the request
    if (reject == true) {
        tmRequests[senderUser].erase(requestID);
        tmTransactions.erase(requestID);
        return 0;
    }

    // check if sender doesnot have enough money
    if (tmUsers[senderUser].getBalance() < request.getAmount()) {
        return 1;
    }





    //request is approved and money is sent
    tmUsers[senderUser].setBalance(tmUsers[senderUser].getBalance() - amount);
    tmUsers[recipientUser].setBalance(tmUsers[recipientUser].getBalance() + amount);
    tmTransactions[requestID].setIsApproved(true);
    tmRequests[senderUser].erase(requestID);
    sender_map[senderUser].insert(requestID);
    recipient_map[recipientUser].insert(requestID);
    return 2;
}


void transactionsManagement::pushing_Ids_of_current_user_to_set(string Username){
    static string lastUsername = "";


    if (Username != lastUsername) {
        last_transactions_of_user.clear();
        lastUsername = Username;
    }


    if (sender_map.find(Username) != sender_map.end() && !sender_map[Username].empty()) {
        auto& it1 = sender_map[Username];
        last_transactions_of_user.insert(it1.begin(), it1.end());
    }

    if (recipient_map.find(Username) != recipient_map.end() && !recipient_map[Username].empty()) {
        auto& it2 = recipient_map[Username];
        last_transactions_of_user.insert(it2.begin(), it2.end());
    }



}





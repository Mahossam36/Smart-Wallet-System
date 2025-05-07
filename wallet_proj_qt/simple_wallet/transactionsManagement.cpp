#include "transactionsManagement.h"
#include "Filehandler.h"
#include <algorithm>
#include <vector>
#include <iostream>


auto& tmUsers = FileHandler::usersData;
auto& tmTransactions = FileHandler::transactionsData;

// helper function used with sort algorithm to sort by id
bool compareById(const Transaction& a, const Transaction& b) {
	return a.getId() < b.getId();
}


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
	tmTransactions.push_back(newTransaction);
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
	tmTransactions.push_back(newRequest);
	return 2;
}



// function output : 0 --> sender doesnot have enough  money and request is erased
//					 1 --> sender rejected the request 
//					 2 --> request is approved and money is transfered
int transactionsManagement::approveRequest(int requestID, bool reject) {
	// sorting to perform binary search to achieve fast search 
	sort(tmTransactions.begin(), tmTransactions.end(), compareById);

	int requestIndex = -1;

	// i will later modifiy this search to be done by binary search to make it faster
	// maybe split the searching functionality in a seprate function if we need to use it in other functions
	for (int i = 0; i < tmTransactions.size(); i++)
	{
		if (tmTransactions[i].getId() == requestID) {
			requestIndex = i;
			break;
		}
	}


	Transaction request = tmTransactions[requestIndex];

	string recipientUser = request.getRecipientUsername();
	string senderUser = request.getSenderUsername();
	double amount = request.getAmount();

	// check if sender doesnot have enough money
	if (tmUsers[senderUser].getBalance() < request.getAmount()) {
		tmTransactions.erase(tmTransactions.begin() + requestIndex);
		return 0;
	}


	// sender reject the request
	if (reject == true) {
		tmTransactions.erase(tmTransactions.begin() + requestIndex);
		return 1;
	}


	//request is approved and money is sent
	tmUsers[senderUser].setBalance(tmUsers[senderUser].getBalance() - amount);
	tmUsers[recipientUser].setBalance(tmUsers[recipientUser].getBalance() + amount);
	tmTransactions[requestIndex].setIsApproved(true);
	return 2;
}




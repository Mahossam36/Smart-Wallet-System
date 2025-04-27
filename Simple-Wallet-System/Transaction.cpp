#include "Transaction.h"
#include "FileHandler.h"
#include <iostream>
using namespace std;

int Transaction::nextId = 1;

// constructor
Transaction::Transaction() {

}

Transaction::Transaction(const string recipientUser, const string senderUser, double transAmount,
	chrono::system_clock::time_point ts) {

	recipientUsername = recipientUser;
	senderUsername = senderUser;
	amount = transAmount;
	transactionTime = ts;
	id = nextId++;

	FileHandler::transactionsData.push_back(*this);

}

// Getters
string Transaction::getRecipientUsername() const {
	return recipientUsername;
}

string Transaction::getSenderUsername() const {
	return senderUsername;
}

double Transaction::getAmount()  const {
	return amount;
}

int Transaction::getId() const {
	return id;
}


#include "Transaction.h"
#include "FileHandler.h"
#include <iostream>
using namespace std;

int Transaction::nextId = 1;

// constructor
Transaction::Transaction() {

}

Transaction::Transaction(const string recipientUser, const string senderUser, double transAmount,
	chrono::system_clock::time_point ts, bool approved) {

	recipientUsername = recipientUser;
	senderUsername = senderUser;
	amount = transAmount;
	transactionTime = ts;
	id = nextId++;
	isApproved = approved;



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

bool Transaction::getIsApproved() const {
	return isApproved;
}

// Setters 
void Transaction::setIsApproved(bool approved) {
	isApproved = approved;
}
#include "Transaction.h"
#include "FileHandler.h"
#include <iomanip>
#include <iostream>
using namespace std;

int Transaction::nextId = 1;

// Default constructor
Transaction::Transaction() {}

// Constructor with arguments
Transaction::Transaction(const string recipientUser, const string senderUser, double transAmount,
                         chrono::system_clock::time_point ts, bool approved)
{
    recipientUsername = recipientUser;
    senderUsername = senderUser;
    amount = transAmount;
    transactionTime = ts;
    isApproved = approved;
    id = nextId++;

    saveTransactions_to_structures();
}


// Getters
string Transaction::getRecipientUsername() const {
	return recipientUsername;
}

string Transaction::getSenderUsername() const {
	return senderUsername;
}

int Transaction::getId() const {
	return id;
}

bool Transaction::getIsApproved() const {
    return isApproved;
}

double Transaction::getAmount()  const {
    return amount;
}

// Setters 
void Transaction::setRecipientUsername(const string& name)  {
    recipientUsername=name;
}
void Transaction::setSenderUsername(const string& name){
    senderUsername=name;
}

void Transaction::setIsApproved(bool approved) {
    isApproved = approved;
}


//Methods
void Transaction::saveTransactions_to_structures(){
    // if the transactions is just a request not approved yet by sender
    // later when the user approve i will delete the id from the set and
    // and its id to the sender and recipient hashtable
    if(this->getIsApproved() == false) {
        FileHandler::transactionsData[this->id] = *this;
        FileHandler::requests[this->senderUsername].insert(this->id);

    }  // if the transactions is a send money transaction just save its data
    else {
        FileHandler::senderData[(this->senderUsername)].insert(this->id);
        FileHandler::recipientData[this->recipientUsername].insert(this->id);
        FileHandler::transactionsData[this->id]= *this;
    }


}


string Transaction::getFormattedTransactionTime() const {
    time_t timeT = chrono::system_clock::to_time_t(transactionTime);


    struct tm* tm = std::localtime(&timeT);


    std::stringstream ss;
    ss << std::put_time(tm, "%Y-%m-%d %H:%M:%S");
    return ss.str();
}


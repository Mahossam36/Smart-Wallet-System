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

    saveTransactions_to_stractures();
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

string Transaction::getFormattedTransactionTime() const {
    // Convert chrono::system_clock::time_point to time_t
    time_t timeT = chrono::system_clock::to_time_t(transactionTime);

    // Convert time_t to tm struct (local time)
    struct tm* tm = std::localtime(&timeT);

    // Format the time as a string
    std::stringstream ss;
    ss << std::put_time(tm, "%Y-%m-%d %H:%M:%S");  // Format as "YYYY-MM-DD HH:MM:SS"
    return ss.str();  // Return the formatted string
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
void Transaction::saveTransactions_to_stractures(){
    FileHandler::senderData[(this->senderUsername)].insert((this->id));
    FileHandler::recipientData[this->recipientUsername].insert((this->id));
    FileHandler::transactionsData[this->id]= *this;



}


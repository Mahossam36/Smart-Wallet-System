#pragma once
#include <string>
#include <chrono>
using namespace std;
class Transaction
{


	string recipientUsername;
	string senderUsername;
	int id;
	static int nextId;
    double amount;
    bool isApproved;





public:

    // timestamp
    chrono::system_clock::time_point transactionTime;

	// constructor
    Transaction();
    Transaction(const string recipientUser, const string  senderUser, double transAmount,
                chrono::system_clock::time_point ts, bool approved=true);

	// Getters
	string getRecipientUsername() const;
	string getSenderUsername() const;
	int getId() const;
    double getAmount()  const;
    bool getIsApproved() const;

    // Setters
    void setRecipientUsername(const string&name) ;
    void setSenderUsername(const string& name) ;

    void setIsApproved(bool approved);


    // Methods
    void saveTransactions_to_structures();
    string getFormattedTransactionTime() const;
};


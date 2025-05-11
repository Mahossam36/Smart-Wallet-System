#pragma once
#include <string>
#include <chrono>
using namespace std;
class Transaction
{

private:
	string recipientUsername;
	string senderUsername;
	double amount;
	int id;
	bool isApproved;
	static int nextId;


public:
	// timestamp
	chrono::system_clock::time_point transactionTime;


	// constructor
	Transaction();

	Transaction(const string recipientUser, const string  senderUser, double transAmount,
		chrono::system_clock::time_point ts, bool approved = true);

	// Getters
	string getRecipientUsername() const;


	string getSenderUsername() const;

	double getAmount()  const;

	int getId() const;

	bool getIsApproved() const;

	// Setters 
	void setIsApproved(bool approved);
    void setRecipientUsername(const string&name) ;
    void setSenderUsername(const string& name) ;

};


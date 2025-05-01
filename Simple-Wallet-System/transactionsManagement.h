#pragma once
#include <string>
#include "FileHandler.h"
using namespace std;
class transactionsManagement
{
public:
	static int sendMoney(string recipientUser, string senderUser, double amount);
	static int requestMoney(string recipientUser, string senderUser, double amount);
	static int approveRequest(int requestID, bool reject);

};


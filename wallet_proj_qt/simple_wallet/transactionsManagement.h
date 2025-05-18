#pragma once
#include <string>
#include "FileHandler.h"
#include <vector>
using namespace std;
class transactionsManagement
{
public:
	static int sendMoney(string recipientUser, string senderUser, double amount);
	static int requestMoney(string recipientUser, string senderUser, double amount);
	static int approveRequest(int requestID, bool reject);
    static set<int> last_transactions_of_user;
    static void pushing_Ids_of_current_user_to_set(string Username);
static vector<Transaction> fetch(const std::string& username, bool is_sorted);
};


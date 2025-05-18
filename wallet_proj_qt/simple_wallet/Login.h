#pragma once
#include <string>
#include "Admin.h"
#include <unordered_map>
using namespace std;

class Login {
public:

    static void login( string& username, string& password);
    static string ActiveUser;
    static bool adminlogged ;
private:
    static Admin admin;
    static int totalFailedAttempts;
    static const int maxFailedAttempts ; 
};

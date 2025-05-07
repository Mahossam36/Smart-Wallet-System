#pragma once
#include <string>
#include "Admin.h"
#include <unordered_map>

class Login {
public:
    static void login(const std::string& username, const std::string& password);
    static string ActiveUser;

private:
    static Admin admin;
     static int totalFailedAttempts;
    static const int maxFailedAttempts ;
};
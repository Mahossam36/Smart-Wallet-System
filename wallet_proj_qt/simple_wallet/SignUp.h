#pragma once
#include<string>
using namespace std;
class SignUp
{
public:

    static string passChecker(string);
    static bool userFound(string);
    static string DataValidation(string firstname,string lastname,string phonenumber);

};



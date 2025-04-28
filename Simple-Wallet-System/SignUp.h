#pragma once
#include<string>
using namespace std;
class SignUp
{
private:
	static bool Uppercase;
	static bool Lowercase;
	static bool Specialchar;
public:
	SignUp(string, string, string, string, string, int);
	static bool passChecker(string);
	bool userFound(string);
	bool DataValidation(string firstname,string lastname,string phonenumber);

};



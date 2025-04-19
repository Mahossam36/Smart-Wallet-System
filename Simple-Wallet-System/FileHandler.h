#include <unordered_map>
#include <string>
#include "User.h"

using namespace std;


class FileHandler {
		
	void SaveUserToJson();
	void LoadUserFromJson();

	

	public :
		FileHandler();
		~FileHandler();
		static unordered_map<string, User> UserData;

};
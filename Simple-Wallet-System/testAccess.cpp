#include "testAccess.h"
// you must include the FileHandler header
#include "FileHandler.h"
#include <iostream>
using namespace std;

/* dont delete this its an example on how to use data structure defined in FileHandler.h */


void testAccess::testPrint() {
	// use the same format as here to access data structures
	if (FileHandler::UserData.find("johndoe00") != FileHandler::UserData.end()) {
		cout << "found";
	}
	else {
		cout << "not found";
	}
}
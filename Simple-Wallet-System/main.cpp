#include <iostream>
#include <fstream>
#include "User.h"
#include "Admin.h"
#include "FileHandler.h"

using namespace std;


int main() {

    // Example usage of User and Admin classes

    FileHandler file;
   /* User user("John", "Doe", "johndoe1", "password123",false, 1, 100.0, "123-456-7890");
    User user2("John", "Doe", "johndoe2", "password123", false, 1, 100.0, "123-456-7890");
    User user3("John", "Doe", "johndoe3", "password123", false, 1, 100.0, "123-456-7890");
    User user4("John", "Doe", "johndoe4", "password123", false, 1, 100.0, "123-456-7890");
    User user5("John", "Doe", "johndoe5", "password123", true, 1, 100.0, "123-456-7890");*/






   Admin admin("admin", "adminpass");
    

    
    return 0;
}

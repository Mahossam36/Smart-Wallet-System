#include <iostream>
#include "../include/User.h"
#include "../include/Admin.h"
using namespace std;
int main() {


    // Example usage of User and Admin classes
    User user("John", "Doe", "johndoe", "password123", 1, 100.0, "123-456-7890");
    Admin admin("admin", "adminpass");
    cout << user.getFirstName() <<endl;
    cout << admin.getUsername()<<admin.getPassword() <<endl;


    
    return 0;
}

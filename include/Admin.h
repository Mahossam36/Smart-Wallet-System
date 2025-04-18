#include <string>
using namespace std;

class Admin {
private:
    string username;
    string password;

public:
    // Constructor
    Admin(const string& uname, const string& pass);

    // Getters
    string getUsername() const;
    string getPassword() const;

    // Setters (optional)
    void setPassword(const string& newPassword);
};
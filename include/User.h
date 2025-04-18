#include <string>
using namespace std;

class User {
private:
    string firstName;
    string lastName;
    string username;
    string password;
    string phoneNumber;
    double balance;
    bool isSuspended;
    int id;

public:
    // Constructor
    User(const string& first, const string& last, const string& uname, const string& pass,
        int userId,double initialBalance = 0.0, const string& phone = "" );

    // Getters
    string getFirstName() const;
    string getLastName() const;
    string getUsername() const;
    string getPassword() const;
    string getPhoneNumber() const;
    double getBalance() const;
    bool getSuspensionStatus() const;
    int getId() const;

    // Setters
    void setPassword(const string& newPassword);
    void setBalance(double newBalance);
    void setId(int newId);
    void setPhoneNumber(const string& phone);
    void suspend();
    void activate();
};


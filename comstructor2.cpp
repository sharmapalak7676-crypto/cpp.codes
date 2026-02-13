//Create a class BankAccount that:
//Has data members:
//account number
//account holder name
//balance
//Uses:
//Default constructor
//Parameterized constructor (defined outside the class)
//Copy constructor (using reference variable)
//Displays account details
//Shows copy initialization of one account to another//

#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
    int accNo;
    char name[30];
    float balance;

public:
    
    BankAccount() {
        accNo = 0;
        strcpy(name, "Not Assigned");
        balance = 0.0;
        cout << "Default Constructor Called" << endl;
    }

    
    BankAccount(int, const char[], float);


    BankAccount(BankAccount &obj) {
        accNo = obj.accNo;
        strcpy(name, obj.name);
        balance = obj.balance;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "-----------------------" << endl;
    }
};


BankAccount::BankAccount(int a, const char n[], float b) {
    accNo = a;
    strcpy(name, n);
    balance = b;
    cout << "Parameterized Constructor Called" << endl;
}

int main() {

    BankAccount acc1;   
        acc1.display();

    BankAccount acc2(101, "Palak", 5000.75);  
    acc2.display();

    BankAccount acc3 = acc2;   
    acc3.display();

    return 0;
}

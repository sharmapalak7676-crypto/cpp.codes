#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    long accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, long accNum, double initialBalance) {
        accountHolder = name;
        accountNumber = accNum;
        balance = (initialBalance >= 0) ? initialBalance : 0;
    }

    // Getters
    string getAccountHolder() const {
        return accountHolder;
    }

    long getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    // Setters with validation
    void setAccountHolder(string name) {
        if (name.length() >= 3) {
            accountHolder = name;
        } else {
            cout << "Error: Name must be at least 3 characters!\n";
        }
    }

    // Business methods (also part of encapsulation)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << " | New balance: $" << balance << endl;
        } else {
            cout << "Error: Deposit amount must be positive!\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << " | New balance: $" << balance << endl;
        } else {
            cout << "Error: Invalid or insufficient funds!\n";
        }
    }
};

int main() {
    BankAccount acc("Aarav Sharma", 123456789012, 15000.75);

    cout << "Account: " << acc.getAccountHolder() 
         << " | Balance: $" << acc.getBalance() << endl;

    acc.deposit(5000);
    acc.withdraw(20000);    // should fail
    acc.withdraw(8000);

    acc.setAccountHolder("A");   // too short → rejected

    cout << "\nFinal balance: $" << acc.getBalance() << endl;

    // acc.balance = -100000;   // ← impossible (private)
    return 0;
}

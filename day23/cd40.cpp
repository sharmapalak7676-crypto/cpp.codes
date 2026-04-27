#include<iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    BankAccount() { balance = 0; }

    void deposit(int amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(int amount) {
        if(amount > balance)
            cout << "Insufficient Balance\n";
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    b.deposit(1000);
    b.withdraw(300);
    b.showBalance();
}
#include<iostream>
using namespace std;

class ATM {
private:
    int pin = 1234;
    int balance = 5000;

public:
    void login(int p) {
        if(p == pin) {
            cout << "Login Success\n";
            showMenu();
        } else {
            cout << "Wrong PIN\n";
        }
    }

    void showMenu() {
        int choice, amt;
        cout << "1. Check Balance\n2. Withdraw\n";
        cin >> choice;

        if(choice == 1)
            cout << "Balance: " << balance;
        else {
            cout << "Enter amount: ";
            cin >> amt;
            if(amt <= balance) {
                balance -= amt;
                cout << "Withdrawn\n";
            } else cout << "Insufficient\n";
        }
    }
};

int main() {
    ATM a;
    a.login(1234);
}
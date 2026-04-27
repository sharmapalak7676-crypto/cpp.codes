#include <iostream>
using namespace std;

class ATM {

private:
    int balance;     
    int pin;         
public:

    ATM(int b, int p) {
        balance = b;   
        pin = p;       
    }

    void login() {

        int enteredPin;
        cout<<"Enter PIN: ";
        cin>>enteredPin;

        if(enteredPin == pin) {

            int choice, amount;

            cout<<"1 Deposit\n";
            cout<<"2 Withdraw\n";
            cout<<"3 Check Balance\n";

            cout<<"Enter Choice: ";
            cin>>choice;

            if(choice == 1) {
                cout<<"Enter Amount: ";
                cin>>amount;

                balance = balance + amount;

                cout<<"Amount Deposited\n";
                cout<<"Current Balance = "<<balance<<endl;
            }

            else if(choice == 2) {

                cout<<"Enter Amount: ";
                cin>>amount;

                if(amount <= balance) {
                    balance = balance - amount;
                    cout<<"Amount Withdrawn\n";
                    cout<<"Current Balance = "<<balance<<endl;
                }

                else
                    cout<<"Insufficient Balance\n";
            }

            else if(choice == 3) {

                cout<<"Current Balance = "<<balance<<endl;

            }

            else
                cout<<"Invalid Choice\n";
        }

        else {

            cout<<"Wrong PIN\n";
        }
    }
};

int main() {

    ATM A(1000,1234);

    A.login();

}
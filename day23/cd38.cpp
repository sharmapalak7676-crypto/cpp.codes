#include<iostream>
using namespace std;

class Bank {
private:
    int balance = 1000;
public:
    void show() { cout << balance; }
};

int main() {
    Bank b;
    b.show();
}
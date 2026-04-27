#include<iostream>
using namespace std;

class Recharge {
private:
    int balance = 0;

public:
    void add(int amt) {
        balance += amt;
    }

    void show() {
        cout << "Balance: " << balance;
    }
};

int main() {
    Recharge r;
    r.add(200);
    r.show();
}
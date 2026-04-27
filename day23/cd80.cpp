#include<iostream>
using namespace std;

class Payment {
public:
    virtual void pay() = 0;
};

class NetBanking : public Payment {
public:
    void pay() {
        cout << "Paid via NetBanking\n";
    }
};

class Wallet : public Payment {
public:
    void pay() {
        cout << "Paid via Wallet\n";
    }
};

int main() {
    Payment* p;
    NetBanking n;
    Wallet w;

    p = &n;
    p->pay();

    p = &w;
    p->pay();
}
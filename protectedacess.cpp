#include <iostream>
using namespace std;

class Parent {
protected:
    int money = 10;
};

class Child : public Parent {
public:
    void showMoney() {
        cout << money << endl;
    }
};

int main() {
    Child c;
    c.showMoney();
    return 0;
}
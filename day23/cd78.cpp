#include<iostream>
using namespace std;

class Meter {
private:
    int units;
    float bill;

public:
    void input() {
        cout << "Enter units: ";
        cin >> units;
    }

    void calc() {
        if(units <= 100)
            bill = units * 2;
        else
            bill = 100*2 + (units-100)*3;
    }

    void show() {
        cout << "Bill: " << bill;
    }
};

int main() {
    Meter m;
    m.input();
    m.calc();
    m.show();
}
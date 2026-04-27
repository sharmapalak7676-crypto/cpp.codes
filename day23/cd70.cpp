#include<iostream>
using namespace std;

class Interest {
private:
    float p, r, t;

public:
    void input() {
        cout << "Enter P R T: ";
        cin >> p >> r >> t;
    }

    void calculate() {
        cout << "SI: " << (p*r*t)/100;
    }
};

int main() {
    Interest i;
    i.input();
    i.calculate();
}
#include<iostream>
using namespace std;

class Fine {
private:
    int days;
    int fine;

public:
    void input() {
        cout << "Enter late days: ";
        cin >> days;
    }

    void calculate() {
        fine = days * 5;
    }

    void display() {
        cout << "Fine: " << fine;
    }
};

int main() {
    Fine f;
    f.input();
    f.calculate();
    f.display();
}
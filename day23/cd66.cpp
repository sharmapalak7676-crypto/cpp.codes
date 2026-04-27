#include<iostream>
using namespace std;

class Voting {
private:
    int age;

public:
    void input() {
        cout << "Enter age: ";
        cin >> age;
    }

    void check() {
        if(age >= 18)
            cout << "Eligible to vote";
        else
            cout << "Not eligible";
    }
};

int main() {
    Voting v;
    v.input();
    v.check();
}
#include<iostream>
using namespace std;

class Attendance {
private:
    int total = 30;
    int present;

public:
    void input() {
        cout << "Enter present days: ";
        cin >> present;
    }

    void show() {
        float percent = (present*100.0)/total;
        cout << "Attendance: " << percent << "%";
    }
};

int main() {
    Attendance a;
    a.input();
    a.show();
}
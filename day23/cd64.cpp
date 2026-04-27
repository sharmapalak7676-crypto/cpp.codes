#include<iostream>
using namespace std;

class Parking {
private:
    int count;

public:
    Parking() { count = 0; }

    void entry() {
        count++;
        cout << "Vehicle Entered\n";
    }

    void exit() {
        if(count > 0) {
            count--;
            cout << "Vehicle Exited\n";
        } else {
            cout << "No vehicles\n";
        }
    }

    void show() {
        cout << "Total Vehicles: " << count << endl;
    }
};

int main() {
    Parking p;
    p.entry();
    p.entry();
    p.exit();
    p.show();
}
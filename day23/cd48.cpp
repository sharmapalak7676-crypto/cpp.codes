#include<iostream>
using namespace std;

class Light {
public:
    void lightOn() { cout << "Light ON\n"; }
};

class Fan {
public:
    void fanOn() { cout << "Fan ON\n"; }
};

class SmartHome : public Light, public Fan {
public:
    void activateAll() {
        lightOn();
        fanOn();
        cout << "Home Activated\n";
    }
};

int main() {
    SmartHome s;
    s.activateAll();
}
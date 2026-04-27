#include<iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Basic attack\n";
    }
};

class Warrior : public Character {
public:
    void attack() {
        cout << "Sword attack\n";
    }
};

class Mage : public Character {
public:
    void attack() {
        cout << "Magic attack\n";
    }
};

int main() {
    Character* c;
    Warrior w;
    Mage m;

    c = &w;
    c->attack();

    c = &m;
    c->attack();
}
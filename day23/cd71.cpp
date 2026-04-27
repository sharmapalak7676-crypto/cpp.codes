#include<iostream>
using namespace std;

class Game {
public:
    virtual void score() {
        cout << "Base Score\n";
    }
};

class Player1 : public Game {
public:
    void score() {
        cout << "Player1 Score: 100\n";
    }
};

class Player2 : public Game {
public:
    void score() {
        cout << "Player2 Score: 80\n";
    }
};

int main() {
    Game* g;
    Player1 p1;
    Player2 p2;

    g = &p1;
    g->score();

    g = &p2;
    g->score();
}
#include<iostream>
using namespace std;

class Quiz {
private:
    int score;

public:
    Quiz() { score = 0; }

    void ask() {
        int ans;
        cout << "2+2=? ";
        cin >> ans;
        if(ans == 4) score++;
    }

    void show() {
        cout << "Score: " << score;
    }
};

int main() {
    Quiz q;
    q.ask();
    q.show();
}
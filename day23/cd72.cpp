#include<iostream>
using namespace std;

class Cart {
private:
    int total;

public:
    Cart() { total = 0; }

    void add(int price) {
        total += price;
    }

    void show() {
        cout << "Total Bill: " << total;
    }
};

int main() {
    Cart c;
    c.add(200);
    c.add(300);
    c.show();
}
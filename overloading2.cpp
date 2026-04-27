 #include <iostream>
using namespace std;

class Sum {
    int total;

public:

    
    Sum(int a, int b) {
        total = a + b;
    }

    
    Sum(int a, int b, int c) {
        total = a + b + c;
    }

    void display() {
        cout << "Sum = " << total << endl;
    }
};

int main() {

    Sum s1(10, 20);        
    Sum s2(5, 10, 15);     

    s1.display();
    s2.display();

    return 0;
}
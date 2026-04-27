#include<iostream>
using namespace std;

class Book {
private:
    int id;
    string name;
    bool issued;

public:
    void addBook(int i, string n) {
        id = i;
        name = n;
        issued = false;
    }

    void issueBook(int i) {
        if(id == i && !issued) {
            issued = true;
            cout << "Book issued: " << name << endl;
        }
    }

    void display() {
        cout << id << " " << name << " ";
        if(issued) cout << "[Issued]\n";
        else cout << "[Available]\n";
    }
};

int main() {
    Book b[3];

    b[0].addBook(1, "C++");
    b[1].addBook(2, "DSA");
    b[2].addBook(3, "AI");

    b[1].issueBook(2);

    for(int i=0;i<3;i++)
        b[i].display();
}
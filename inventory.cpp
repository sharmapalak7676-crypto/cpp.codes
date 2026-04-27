#include <iostream>
using namespace std;

class Inventory {
private:
    int items[100];
    int capacity;
    int size;

    bool isValidIndex(int index) {
        return (index >= 0 && index <= size);
    }

public:
    // Constructor
    Inventory(int cap) {
        capacity = cap;
        size = 0;
    }

    // Insert at end
    void insert(int value) {
        if (size >= capacity) {
            cout << "Inventory Full\n";
            return;
        }

        items[size] = value;
        size++;
    }

    // Insert at specific position
    void insertAt(int index, int value) {
        if (size >= capacity || !isValidIndex(index)) {
            cout << "Invalid Position\n";
            return;
        }

        // Shift elements right
        for (int i = size; i > index; i--) {
            items[i] = items[i - 1];
        }

        items[index] = value;
        size++;
    }

    // Display inventory
    void display() {
        if (size == 0) {
            cout << "Inventory is empty\n";
            return;
        }

        for (int i = 0; i < size; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Inventory inv(5);

    inv.insert(10);
    inv.insert(20);
    inv.insert(30);

    inv.display();  // 10 20 30

    inv.insertAt(1, 15);

    inv.display();  // 10 15 20 30

    inv.insert(40);
    inv.insert(50);  // Will show "Inventory Full"

    inv.display();

    return 0;
}
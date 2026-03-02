#include <iostream>
using namespace std;

class Inventory {
private:
    int arr[100];
    int size;

public:
    // Constructor
    Inventory(int s) {
        size = s;
    }

    // Input elements
    void input() {
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Display elements
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Update element at given index
    void update(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        } else {
            cout << "Invalid Index" << endl;
        }
    }

    // Reverse the array
    void reverse() {
        int start = 0, end = size - 1;
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};

int main() {
    int n;
    cin >> n;

    Inventory obj(n);

    obj.input();
    obj.display();

    int index, value;
    cin >> index >> value;
    obj.update(index, value);

    obj.reverse();
    obj.display();

    return 0;
}
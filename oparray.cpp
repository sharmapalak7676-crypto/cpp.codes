#include <iostream>
using namespace std;
class Inventory{
    int item[100];
    int size;
    int capacity;
bool isValidIndex(int index){
    return index>=0 && index<size;

}
public:
Inventory(int cap){
    size=0;
    capacity=cap;

}
void insert(int val){
    if (size>capacity)
    {
    cout<<"inventory full";
    return;
    }
    item[size] = val;
        size++;
        cout<<val<<" Item Inserted Sucessfully\n";
}
    
    void insertAt(int index, int value) {
        
        // if(size>capacity || index<0 || index>size) 
        if(size>capacity || !isValidIndex(index)) 
        {
            cout<<"\nInvalid ";
        }
            
        for (int i = size; i > index; i--) {
            item[i] = item[i - 1];
        }

        item[index] = value;
        size++;
        cout<<value<<" Item Inserted Sucessfully at position "<<index<<"\n";
    }

    
    void display() {
        
        for (int i = 0; i < size; i++) {
            cout << "\nItems:"<<item[i] << " ";
        }
        cout << endl;
    }

};
int main(){
    Inventory inv(5);
    inv.insert (10);
    inv.insert(20);
    inv.insert(30);
    inv.insert(40);
    inv.insert(50);

    inv.display();
    inv.insertAt(2,25);
    inv.display();
    return 0;

}
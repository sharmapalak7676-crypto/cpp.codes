#include <iostream>
#include <fstream>
using namespace std;

// Base Stack (Template)
template <class T>
class BaseStack {
protected:
    T arr[100];
    int top;

public:
    BaseStack() { top = -1; }

    void push(T x) {
        arr[++top] = x;
    }

    T pop() {
        return arr[top--];
    }

    bool isEmpty() {
        return (top == -1);
    }
};


// 1. User Stack
template <class T>
class UserStack : public BaseStack<T> { };


// 2. Undo Stack
template <class T>
class UndoStack : public BaseStack<T> { };


// 3. Redo Stack
template <class T>
class RedoStack : public BaseStack<T> { };


// 4. Logger Stack
template <class T>
class LoggerStack : public BaseStack<T> {
public:
    void logToFile(T action) {
        ofstream file("log.txt", ios::app);
        file << action << endl;
        file.close();
    }
};


// 5. Editor Stack Manager
template <class T>
class EditorStackManager : public UserStack<T>,
                           public UndoStack<T>,
                           public RedoStack<T>,
                           public LoggerStack<T> {

public:

    void doAction(T action) {
        this->UserStack<T>::push(action);
        this->LoggerStack<T>::logToFile(action);
        cout << "Done: " << action << endl;
    }

    void undoAction() {
        if (this->UserStack<T>::isEmpty()) {
            cout << "Nothing to undo\n";
            return;
        }

        T action = this->UserStack<T>::pop();
        this->RedoStack<T>::push(action);

        cout << "Undo: " << action << endl;
    }

    void redoAction() {
        if (this->RedoStack<T>::isEmpty()) {
            cout << "Nothing to redo\n";
            return;
        }

        T action = this->RedoStack<T>::pop();
        this->UserStack<T>::push(action);

        cout << "Redo: " << action << endl;
    }
};


// MAIN
int main() {
    EditorStackManager<string> obj;

    obj.doAction("Write A");
    obj.doAction("Write B");

    obj.undoAction();
    obj.redoAction();

    return 0;
}
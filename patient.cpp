#include <iostream>
using namespace std;

class PatientQueue
{
    struct Node
    {
        int patientID;
        Node *next;
    };

    Node *head;

    bool isEmpty()
    {
        return head == NULL;
    }

public:
    PatientQueue()
    {
        head = NULL;
    }
    void addAny(int id)
    {
        Node *newNode = new Node;

        newNode->patientID = id;
        newNode->next = head;

        head = newNode;
    }

    
    void addRegular(int id)
    {
        Node *newNode = new Node;

        newNode->patientID = id;
        newNode->next = NULL;

        if (isEmpty())
        {
            head = newNode;
            return;
        }

        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    
    void insertAt(int id, int pos)
    {
        if (pos == 0)
        {
            addAny(id);
            return;
        }

        Node *temp = head;

        for (int i = 0; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Invalid Position\n";
            return;
        }

        Node *newNode = new Node;

        newNode->patientID = id;
        newNode->next = temp->next;

        temp->next = newNode;
    }
    void update(int pos, int newID)
    {
        Node *temp = head;

        for (int i = 0; i < pos && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Invalid Position\n";
            return;
        }

        temp->patientID = newID;
    }

    
    void reverse()
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head = prev;
    }


    void displayCount()
    {
        if (isEmpty())
        {
            cout << "Queue Empty\n";
            return;
        }

        Node *temp = head;
        int count = 0;

        cout << "Patients: ";

        while (temp != NULL)
        {
            cout << temp->patientID << " ";
            temp = temp->next;
            count++;
        }

        cout << "\nTotal Patients: " << count << endl;
    }

    
    void dischargeFirst()
    {
        if (isEmpty())
        {
            cout << "Queue Empty\n";
            return;
        }

        Node *temp = head;

        head = head->next;

        delete temp;
    }
    void dischargeLast()
    {
        if (isEmpty())
        {
            cout << "Queue Empty\n";
            return;
        }

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node *temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        Node *delNode = temp->next;

        temp->next = NULL;

        delete delNode;
    }

    
    void dischargeAt(int pos)
    {
        if (pos == 0)
        {
            dischargeFirst();
            return;
        }

        Node *temp = head;

        for (int i = 0; i < pos - 1 && temp->next != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp->next == NULL)
        {
            cout << "Invalid Position\n";
            return;
        }

        Node *delNode = temp->next;

        temp->next = delNode->next;

        delete delNode;
    }
};

int main()
{
    PatientQueue q;

    q.addAny(101);
    q.addAny(102);

    q.addRegular(103);
    q.addRegular(104);

    q.insertAt(200,2);

    q.displayCount();

    cout << "\nAfter Update\n";
    q.update(1,500);
    q.displayCount();

    cout << "\nAfter Reverse\n";
    q.reverse();
    q.displayCount();

    cout << "\nAfter Discharge First\n";
    q.dischargeFirst();
    q.displayCount();

    cout << "\nAfter Discharge Last\n";
    q.dischargeLast();
    q.displayCount();

    cout << "\nAfter Discharge At Position\n";
    q.dischargeAt(1);
    q.displayCount();

    return 0;
}
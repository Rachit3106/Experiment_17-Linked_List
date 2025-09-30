/*
Name:-Rachit Deshpande
PRN:-24070123035
Batch:-A2
*/
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtStart(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;  
        head = newNode;        
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtStart(10);
    list.insertAtStart(20);
    list.insertAtStart(30);
    list.insertAtStart(40);

    list.display();

    return 0;
}
/*
Output:-
40 -> 30 -> 20 -> 10 -> NULL
*/

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

int main() {
   Node* node = new Node(10);
   cout << "Node Data: " << node->data << endl;
   cout << "Node Next: " << node->next << endl;
   return 0;
}
/*
Output:-
Node Data: 10
Node Next: 0
*/

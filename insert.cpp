#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(Node*& head, int item) {
    Node* newNode = new Node(item);  
    newNode->next = head;            
    head = newNode;                  
}
void insertAtPosition(Node*& head, int position, int item) {
    if (position == 1) {  
        insertAtHead(head, item);
        return;
    }

    Node* newNode = new Node(item);
    Node* temp = head;
    
    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;
    }
        newNode->next = temp->next;
        temp->next = newNode;
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL; 

    while (true) {
        int item, position;
        cout << "Enter value to insert (-1 to exit): ";
        cin >> item;

        if (item == -1) {  
            break;
        }

        cout << "Enter position to insert: ";
        cin >> position;

        insertAtPosition(head, position, item);  
        cout << "Updated Linked List: ";
        printList(head);  
    }

    cout << "Final Linked List: ";
    printList(head); 

    return 0;
}

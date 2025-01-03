#include <iostream>
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

int searchNode(Node* head, int item) {
    Node* temp = head; // Start from the head of the list
    int position = 1; // Initialize position counter
    
    while (temp) { // Traverse the list until the end
        if (temp->val == item) // Check if the current node's value matches the item
            return position; // Return the position if found
        temp = temp->next; // Move to the next node
        position++; // Increment the position counter
    }
    return -1; // Return -1 if the item is not found
}

// Function to print the list
void printList(Node* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
       Node* head = new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
head->next=a;
a->next=b;
b->next=c;
c->next=d;
d->next=e;
    cout << "Current List: ";
    printList(head);
while(true){
    
int item;
    cout << "Enter value to search:(Input 0 terminate:) ";
    cin >> item;

    int position = searchNode(head, item);
    if (position != -1) {
        cout << "Item " << item << " found at position: " << position << endl;
    } else {
        cout << "Item " << item << " not found in the list." << endl;
    }
    if(item==0){
        break;
    }

}
    
    return 0;
}

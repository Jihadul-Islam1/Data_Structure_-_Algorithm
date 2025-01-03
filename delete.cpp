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

void deleteNode(Node*& head, int position) {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted from head." << endl;
        return;
    }
    Node* temp = head;
    for (int i = 1; i < position - 1 ; ++i) {
        temp = temp->next;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
    cout << "Deleted from position " << position << "." << endl;
}

void printList(Node* head) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
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


    cout << "Original list: ";
    printList(head);

    while (true) {
        int position;
        cout << "\nEnter the position to delete from (or enter 0 to exit): ";
        cin >> position;

        if (position == 0) {
            break;
        }

        deleteNode(head, position);

        cout << "List after deletion: ";
        printList(head);

        if (head == NULL) {
            cout << "The list is now empty. Exiting loop." << endl;
            break;
        }
    }

    cout << "Program exited." << endl;
    return 0;
}

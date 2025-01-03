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

// SEARCH ফাংশন যা sorted linked list-এ ITEM খুঁজে পায়
Node* searchSortedList(Node* head, int item) {
    Node* ptr = head;  // শুরুতে ptr হেড পয়েন্ট করছে

    while (ptr != NULL) {  // যতক্ষণ ptr NULL না হয়
        if (item < ptr->val) {  // ITEM যদি বর্তমান নোডের মানের চেয়ে ছোট হয়
            return NULL;  // ITEM লিস্টে নেই, কারণ লিস্ট sorted
        } else if (item == ptr->val) {  // ITEM বর্তমান নোডের মানের সমান হলে
            return ptr;  // LOC হিসেবে ptr ফেরত দেয়া হয়
        }
        ptr = ptr->next;  // PTR পরবর্তী নোডে নিয়ে যাওয়া হয়
    }
    // যদি ITEM না পাওয়া যায়
    return NULL;  // LOC কে NULL সেট করা হয়
}

// লিঙ্কড লিস্ট প্রিন্ট করার ফাংশন
void printTra(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // একটি sorted linked list তৈরি করা হচ্ছে
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // লিঙ্কড লিস্ট প্রিন্ট করা হচ্ছে
    cout << "Linked List: ";
    printTra(head);

    // ITEM খোঁজা হচ্ছে
    int item = 30;
    Node* loc = searchSortedList(head, item);

    if (loc != NULL) {
        cout << "Item " << item << " found with value: " << loc->val << endl;
    } else {
        cout << "Item " << item << " not found in the list." << endl;
    }

    return 0;
}

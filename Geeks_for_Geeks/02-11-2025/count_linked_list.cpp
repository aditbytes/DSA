#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void printList(Node* head){
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
        
    }
}

void countNodes(Node* head){
    int count = 0;
    while (head != NULL){
        count++;
        head = head->next;
    }
    cout << "\nNumber of nodes in the linked list: " << count << endl;
}

int main(){
    Node* head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    printList(head);
    countNodes(head);
    return 0;
}
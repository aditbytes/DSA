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
void findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    if (slow != NULL){
        cout << "\nMiddle element is: " << slow->data << endl;
    }
}
int main(){
    Node* head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    printList(head);
    findMiddle(head);
    return 0;
}
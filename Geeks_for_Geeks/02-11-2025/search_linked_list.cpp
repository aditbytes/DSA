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
bool searchList(Node* head, int target){
    
    while (head){
        if (head->data == target){
            return true;
        }
        head = head->next;
    }
    return false;
}

int main(){ 
    Node* head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    int key = 2;
    if (searchList(head, key)){
        cout << "Found " << key << " in the linked list." << endl;
    } else {
        cout << key << " not found in the linked list." << endl;
    }
    return 0;
}

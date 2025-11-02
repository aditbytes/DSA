#include<iostream>
using namespace std;

class ListNode {
    public:
    int data;
    ListNode* next;
    ListNode(int val) {
        data = val;
        next = NULL;
    }
};
void insertAtHead(ListNode* &head, int val){
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
}
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;  
        while (curr != NULL) {
            next = curr->next;  
            curr->next = prev;  
            prev = curr;        
            curr = next;        
        }
        return prev;
    }
};
void printList(ListNode* head){
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){
    ListNode* head = NULL;
    
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    cout << "Original list: ";
    printList(head);        
    Solution solution;
    ListNode* reversedHead = solution.reverseList(head);
    cout << "\nReversed list: ";
    printList(reversedHead);
    return 0;
}
// User function Template for C++
#include<iostream>
using namespace std;
class Node {
  public:
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        Node *front = head;
        while(head->next->next!=NULL)
        {
            head = head->next;
        }
        int temp = head->next->data;
        head->next=NULL;
        Node *nhead = new Node(temp);
        nhead->next = front;
        
        return nhead;
    }
};
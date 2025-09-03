#include<iostream>
using namespace std;
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};


class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node *temp;
        if(head->prev == NULL && head->next == NULL)
        {
            return head;
        }
        while(head!=NULL)
        {
            temp = head->next;
            head->next = head->prev;
            head->prev = temp;
            head = temp;
            if(head->next == NULL)
            {
                temp = head->next;
                head->next = head->prev;
                head->prev = temp;
                break;
            }
        }
        return head;
    }
};
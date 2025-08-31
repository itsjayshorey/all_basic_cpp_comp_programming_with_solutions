#include<queue>
#include<iostream>
using namespace std;
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};


class Solution {
  public:
    queue<int> current;
    void reverse(Node* &head)
    {
        if(head==NULL)
        {
            return;
        }
        else
        {
            int curr = head->data;
            current.push(curr);
            reverse(head->next);
            head->data = current.front();
            current.pop();
        }
    }
    Node* reverseList(Node* head) {
        // code here
        reverse(head);
        return head;
    }
};
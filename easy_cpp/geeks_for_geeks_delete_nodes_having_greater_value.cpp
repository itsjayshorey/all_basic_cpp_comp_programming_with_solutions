/*

The structure of linked list is the following
*/
#include<queue>
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    queue<int> col;
    void reverse(Node *head)
    {
        if(head == NULL)
        {
            return;
        }
        else
        {
            int curr = head->data;
            col.push(curr);
            reverse(head->next);
            head->data = col.front();
            col.pop();
        }
    }
    Node *compute(Node *head) {
        // your code goes here
        reverse(head);
        Node *ans = new Node(head->data);
        Node *cp = ans;
        int maxi  = head->data;
        head = head->next;
        while(head!=NULL)
        {
            if((head->data)>=maxi)
            {
                maxi = head->data;
                ans->next = new Node(head->data);
                ans = ans->next;
            }
            head = head->next;
        }
        reverse(cp);
        return cp;
    }
};
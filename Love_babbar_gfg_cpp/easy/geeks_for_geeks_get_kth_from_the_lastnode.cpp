#include<iostream>
#include<stack>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        stack<int> stk;
        int sz = 0;
        while(head!=NULL)
        {
            stk.push(head->data);
            head = head->next;
            sz++;
        }
        if(sz<k)
        {
            return -1;
        }
        for(int i = 0;i<k-1;i++)
        {
            stk.pop();
        }
        return stk.top();
    }
};
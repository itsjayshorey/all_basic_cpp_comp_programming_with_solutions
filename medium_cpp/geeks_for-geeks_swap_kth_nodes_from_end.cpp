#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        if(!head)
        {
            return head;
        }
        Node* ptr = head;
        int len = 0;
        while(ptr!=NULL)
        {
            ptr = ptr->next;
            len++;
        }
        Node* kth = head;
        int kt = k;
        if(k>len)
        {
            return head;
        }
        while(k>1)
        {
            k--;
            kth = kth->next;
        }
        Node* lstk = head;
        int ls = len - kt;
        while(ls>0)
        {
            ls--;
            lstk = lstk->next;
        }
        int temp = lstk->data;
        lstk->data = kth->data;
        kth->data = temp;
        return head;
    }
};
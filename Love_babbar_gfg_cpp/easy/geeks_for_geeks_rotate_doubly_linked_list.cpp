#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int x)
    {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};


class Solution {
  public:
    Node *rotateDLL(Node *head, int p) {

        // code here..
        Node *pt = head;
        Node *headend = head;
        Node *ans;
        Node *headendi = head;
        int len = 1;
        while(headendi->next!=NULL)
        {
            len++;
            headendi = headendi->next;
        }
        p = p%len;
        int ptr =p;
        if(p == 0)
        {
            return head;
        }
        len = 1;
        while(headend->next!=NULL)
        {
            if(p>1)
            {
                pt=pt->next;
                p--;
            }
            headend = headend->next;
            len++;
        }
        headend->next = head;
        head->prev = headend;
        ans = pt->next;
        ans->prev = NULL;
        pt->next = NULL;
        return ans;
    }
};
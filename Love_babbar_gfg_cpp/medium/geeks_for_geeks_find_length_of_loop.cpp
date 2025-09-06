#include<iostream>
#include<map>
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
    map<Node*,int> mp;
    int lengthOfLoop(Node *head) {
        // code here
        Node *h = head;
        Node *pre;
        int i = 1;
        while(h!=NULL && mp[h]==0)
        {
            mp[h] = i++;
            pre = h;
            h=h->next;
        }
        if(h==NULL)
        {
            return 0;
        }
        else
        {
            return mp[pre]-mp[h]+1;
        }
    }
};
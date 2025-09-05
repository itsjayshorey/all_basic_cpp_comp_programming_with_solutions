#include<iostream>
#include<map>
using namespace std;
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class Solution {
  public:
    map<int,int> mp;
    void traverse(Node* root)
    {
        if(root == NULL)
        {
            return;
        }
        mp[root->data]++;
        traverse(root->next);
    }
    void putval(Node* root)
    {
        if(root == NULL)
        {
            return;
        }
        if(mp[0]>0)
        {
            root->data = 0;
            mp[0]--;
        }
        else if(mp[1]>0)
        {
            root->data = 1;
            mp[1]--;
        }
        else
        {
            root->data = 2;
            mp[2]--;
        }
        putval(root->next);
    }
    Node* segregate(Node* head) {
        // code here
        traverse(head);
        putval(head);
        return head;
    }
};
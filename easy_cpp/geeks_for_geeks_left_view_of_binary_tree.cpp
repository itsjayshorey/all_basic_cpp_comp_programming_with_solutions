#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
  public:
    vector<int> lef;
    int h = 0;
    void put_left(Node *root,int he)
    {
        if(root==NULL)
        {
            return;
        }
        if(he>=h)
        {
            lef.push_back(root->data);
            h++;
        }
        put_left(root->left,he+1);
        put_left(root->right,he+1);
        
    }
    vector<int> leftView(Node *root) {
        // code here
        put_left(root,0);
        return lef;
    }
};
#include<iostream>
using namespace std;
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 

class Solution {
  public:
    bool ans = true;
    int h(Node* root,int he)
    {
        if(root == NULL)
        {
            return he;
        }
        int r = h(root->left,he+1);
        int l = h(root->right,he+1);
        if(abs(r-l)>1)
        {
            ans = false;
        }
        if(!ans)
        {
            return he;
        }
        return max(r,l);
    }
    bool isBalanced(Node* root) {
        // Code here
        h(root,-1);
        return ans;
    }
};
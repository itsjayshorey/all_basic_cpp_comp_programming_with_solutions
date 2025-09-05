#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inord(Node *root, vector<int> &v)
    {
        if(root == NULL)
        {
            return;
        }
        inord(root->left,v);
        v.push_back(root->data);
        inord(root->right,v);
    }
    void putinord(Node *root, vector<int> &v,int &i)
    {
        if(root == NULL)
        {
            return;
        }
        putinord(root->left,v,i);
        root->data=v[i++];
        putinord(root->right,v,i);
    }
    Node *binaryTreeToBST(Node *root) {
        // Your code goes here
        Node *temp = root;
        vector<int> val;
        inord(root, val);
        sort(val.begin(),val.end());
        int k = 0;
        putinord(root,val,k);
        val.clear();
        return temp;
    }
};
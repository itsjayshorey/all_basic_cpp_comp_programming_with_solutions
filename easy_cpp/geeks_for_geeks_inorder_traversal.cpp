#include<iostream>
#include<vector>
using namespace std;


// Tree Node
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
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> ans;
    void inord(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left == NULL)
        {
            ans.push_back(root->data);
        }
        else
        {
            inord(root->left);
            ans.push_back(root->data);
        } 
        inord(root->right);
        
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        inord(root);
        return ans;
        
    }
};
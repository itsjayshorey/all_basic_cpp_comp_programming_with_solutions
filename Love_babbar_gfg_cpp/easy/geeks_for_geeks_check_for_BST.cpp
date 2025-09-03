#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};


class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool isbs(Node* root, int max, int min)
    {
        if(root == NULL)
        {
            return true;
        }
        if(root->data <min || root->data >max)
        {
            return false;
        }
        return(isbs(root->left, root->data - 1 , min) && isbs(root->right, max, root->data +1));
    }
    bool isBST(Node* root) {
        // Your code here
        return(isbs(root,INT_MAX,INT_MIN));
    }
};
#include <iostream>
#include <vector>
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
    void leftboundary(Node *root ,vector<int> &temp)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            return;
        }
        temp.push_back(root->data);
        if(root->left!=NULL)
        {
            leftboundary(root->left, temp);
        }
        else
        {
            leftboundary(root->right,temp);
        }
        return;
    }
    void leafnodes(Node *root, vector<int> &temp)
    {
        if(root==NULL)
        {
            return;
        }
        if((root->left==NULL) && (root->right==NULL))
        {
            temp.push_back(root->data);
            return;
        }
        leafnodes(root->left,temp);
        leafnodes(root->right,temp);
        return;
    }
    void rightboundary(Node *root, vector<int> &temp)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->right == NULL && root->left == NULL)
        {
            return;
        }
        if(root->right!=NULL)
        {
            rightboundary(root->right,temp);
        }
        else
        {
            rightboundary(root->left,temp);
        }
        temp.push_back(root->data);
        return;
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        if(root!=NULL)
        {
            ans.push_back(root->data);
        }
        if(root->left!=NULL)
        {
            leftboundary(root->left,ans);
        }
        leafnodes(root->left,ans);
        leafnodes(root->right,ans);
        if(root->right!=NULL)
        {
            rightboundary(root->right, ans);
        }
        return ans;
    }
};//border traversal medium
/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
class Solution {
  public:
    void dfs_preorder(vector<int> &ans, Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        ans.push_back(root->data);
        dfs_preorder(ans, root->left);
        dfs_preorder(ans, root->right);
    }
    vector<int> preorder(Node* root) {
        // code here
        vector<int> ans;
        dfs_preorder(ans,root);
        return ans;
    }
};
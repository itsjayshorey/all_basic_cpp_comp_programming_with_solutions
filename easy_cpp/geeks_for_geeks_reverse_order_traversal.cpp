#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
}; 
class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        vector<int> ans;
        if(root==NULL)
        {
            return ans;
        }
        stack<int> ansrev;
        queue<Node*> col;
        col.push(root);
        Node *current;
        while(!col.empty())
        {
            current = col.front();
            col.pop();
            if(current->right!=NULL)
            {
                col.push(current->right);
            }
            if(current->left!=NULL)
            {
                col.push(current->left);
            }
            ansrev.push(current->data);
        }
        while(!ansrev.empty())
        {
            ans.push_back(ansrev.top());
            ansrev.pop();
        }
        return ans;
    }
};
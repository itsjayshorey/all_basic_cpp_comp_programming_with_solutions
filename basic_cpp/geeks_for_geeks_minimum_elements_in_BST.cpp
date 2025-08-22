// Function to find the minimum element in the given BST.

/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
*/
#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}
class Solution {
  public:
    void dfs(Node* root, int &a)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->data<a)
        {
            a = root->data;
        }
        dfs(root->left,a);
        dfs(root->right,a);
    }
    int minValue(Node* root) {
        // Code here
        int a = 1000000;
        dfs(root,a);
        return a;
    }
};
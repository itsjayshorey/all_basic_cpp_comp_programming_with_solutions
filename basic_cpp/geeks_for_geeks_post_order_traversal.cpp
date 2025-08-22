/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
#include <vector>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    void dfs(Node* root, vector<int> &ans)
    {
        if(root == NULL)
        {
            return;
        }
        dfs(root->left,ans);
        dfs(root->right,ans);
        ans.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int> ans;
        dfs(root,ans);
        return ans;
    }
};
#include <vector>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};


class Solution {
  public:
    /*You are required to complete this method*/
    vector<int> vec;
    void chk(Node *root,int h)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            vec.push_back(h);
        }
        chk(root->left,h+1);
        chk(root->right,h+1);
    }
    bool check(Node *root) {
        // Your code here
        chk(root,0);
        for(int i=0;i<vec.size()-1;i++)
        {
            if(vec[i]!=vec[i+1])
            {
                return false;
            }
        }
        return true;
    }
};
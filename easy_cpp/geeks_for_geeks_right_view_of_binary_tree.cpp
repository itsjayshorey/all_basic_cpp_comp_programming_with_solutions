#include <iostream>
#include <vector>
using namespace std;
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; 

class Solution {
  public:
    int he = -1;
    vector<int> ans;
    void righttrav(Node *root,int h)
    {
        if(root==NULL)
        {
            return;
        }
        if(he<h)
        {
            ans.push_back(root->data);
            he++;
        }
        righttrav(root->right,h+1);
        righttrav(root->left,h+1);
        //return;
    }
    vector<int> rightView(Node *root) {
        //  Code here
        righttrav(root,0);
        return ans;
    }
};         //right view of binay tree easy.
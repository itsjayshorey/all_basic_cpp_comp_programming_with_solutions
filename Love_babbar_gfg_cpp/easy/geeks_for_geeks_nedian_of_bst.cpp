#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// your task is to complete the Function
// Function should return median of the BST
vector<int> an;
void inord(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    inord(root->left);
    an.push_back(root->data);
    inord(root->right);
}
float findMedian(struct Node *root) {
    // Code here
    inord(root);
    int k=an.size();
    sort(an.begin(),an.end());
    if(k%2==1)
    {
        float ans = float(an[(k/2)]);
        an.clear();
        return ans;
    }
    else
    {
        float ans = (float(an[(k-1)/2])+float(an[(k)/2]))/2;
        an.clear();
        return ans;
    }
}
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
// A binary tree node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }
        queue<pair<Node*,int>> q;
        map<int,int> mp;
        q.push({root,0});
        mp[0] = root->data;
        pair<Node*,int> tp;
        while(!q.empty())
        {
            tp = q.front();
            q.pop();
            if(mp.find(tp.second)==mp.end())
            {
                mp[tp.second]=tp.first->data;
            }
            if(tp.first->left!=NULL)
            {
                q.push({tp.first->left,tp.second-1});
            }
            if(tp.first->right!=NULL)
            {
                q.push({tp.first->right,tp.second+1});
            }
        }
        for(auto it = mp.begin(); it!=mp.end(); it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};
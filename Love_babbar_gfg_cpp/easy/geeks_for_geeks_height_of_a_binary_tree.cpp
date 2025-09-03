#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
    int h (Node* node, int he)
    {
        if(node == NULL)
        {
            return he;
        }
        return max(h(node->left,he+1),h(node->right,he+1));
    }
    int height(Node* node) {
        // code here
        return(h(node,0)-1);
    }
};
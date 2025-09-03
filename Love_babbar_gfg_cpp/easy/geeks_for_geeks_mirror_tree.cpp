#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};


class Solution {
  public:
    void mirror(Node* node) {
        // code here
        if(node == NULL)
        {
            return;
        }
        Node* temp;
        temp = node->right;
        node->right = node->left;
        node->left = temp;
        mirror(node->left);
        mirror(node->right);
    }
};
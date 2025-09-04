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
    Node* insert(Node* root, int key) {
        //  code  here
        Node* temp = new Node(key);
        if(root == NULL)
        {
            root = temp;
            return root;
        }
        if(root->data==key)
        {
            return root;
        }
        if(root->data>key)
        {
            root->left = insert(root->left,key);
        }
        else
        {
            root->right = insert(root->right,key);
        }
        return root;
    }
};
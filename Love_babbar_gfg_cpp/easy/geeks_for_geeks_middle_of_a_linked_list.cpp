#include <queue>
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; 

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        queue<int> q;
        int an = 0;
        while(head!=NULL)
        {
            q.push(head->data);
            head = head->next;
            an++;
        }
        for(int i = 0; i <an/2; i++)
        {
            q.pop();
        }
        return q.front();
    }
};
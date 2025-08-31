/*
The structure of linked list is the following
*/
#include <iostream>
#include <set>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        set<int> st;
        Node *dup = head;
        Node *prev = head;
        st.insert(head->data);
        while(dup->next!=NULL)
        {
            if(st.find(dup->next->data)!=st.end())
            {
                dup->next = dup->next->next;
            }
            else
            {
                st.insert(dup->next->data);
                dup = dup->next;
            }
        }
        // if(st.find(dup->data)!=st.end())
        // {
        //     prev->next = NULL;
        // }
        return head;
    }
};
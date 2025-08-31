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
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        set<int> st;
        Node* pt = head;
        st.insert(pt->data);
        while(pt->next != NULL)
        {
            if(st.find(pt->next->data)!=st.end())
            {
                if(pt->next->next!=NULL)
                {
                    pt->next = pt->next->next;
                }
                else
                {
                    pt->next = NULL;
                }
            }
            else
            {
                st.insert(pt->next->data);
                pt = pt->next;
            }
        }
        return head;
    }
};
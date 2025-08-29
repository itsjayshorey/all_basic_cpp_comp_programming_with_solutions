#include <iostream>
using namespace std;
// The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};


class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        Node* ans =new Node(0);
        Node* ptr = ans;
        while((head1!=NULL)&&(head2!=NULL))
        {
            if((head1->data)>(head2->data))
            {
                head2 = head2->next;
            }
            else if((head1->data)==(head2->data))
            {
                ptr->next = new Node(head1->data);
                ptr = ptr->next;
                head2 = head2->next;
                head1 = head1->next;
            }
            else
            {
                head1 = head1->next;
            }
        }
        return ans->next;
    }
};
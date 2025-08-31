/* The structure of linked list is the following
*/
#include <iostream>
using namespace std;
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};


//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        // code here
        Node *start = head;
        head=head->next;
        int num = 1;
        while(start!=head)
        {
            head = head->next;
            num++;
        }
        int first = (num+1)/2 ;
        int second = num - first ;
        Node *ans1 = new Node(start->data);
        Node *ans1pt = ans1;
        for(int i = 1 ; i < first ; i++)
        {
            start = start->next;
            ans1->next = new Node(start->data);
            ans1 = ans1->next;
        }
        ans1->next = ans1pt;
        start = start->next;
        Node *ans2 = new Node(start->data);
        Node *ans2pt = ans2;
        for(int i = 1 ; i < second ; i++)
        {
            start = start->next;
            ans2->next = new Node(start->data);
            ans2 = ans2->next;
        }
        ans2->next = ans2pt;
        return {ans1pt,ans2pt};
    }
};
// User function Template for C++

/* Doubly linked list node class
*/
#include <vector>
#include <utility>
using namespace std;
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};


class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        vector<pair<int, int>> ans;
        Node *front=head;
        int b = 0;
        while(head->next!=NULL)
        {
            head=head->next;
            b++;
        }
        Node *back = head;
        int f = 0;
        while(b>f)
        {
            if(((front->data) + (back->data))>target)
            {
                back=back->prev;
                b--;
            }
            else if(((front->data) + (back->data))<target)
            {
                front = front->next;
                f++;
            }
            else
            {
                pair<int,int> temp;
                temp.first = front->data;
                temp.second = back->data;
                ans.push_back(temp);
                front = front->next;
                back =  back->prev;
                b--;f++;
            }
        }
        return ans;
    }
};
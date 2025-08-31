// User function Template for C++
#include <iostream>
#include <stack>
using namespace std;

class Solution {
  public:
    void insert(stack<int> &st, int x)
    {
        if(st.empty())
        {
            st.push(x);
            return;
        }
        else
        {
            int current = st.top();
            st.pop();
            insert(st,x);
            st.push(current);
            // return;
        }
    }
    stack<int> insertAtBottom(stack<int> st, int x) {
        insert(st,x);
        return st;
    }
};
// function Template for C++
#include<stack>
#include<queue>
using namespace std;
class Solution {
  public:
    stack<int> st;
    void reversal(queue<int> &q)
    {
        if(q.empty())
        {
            return;
        }
        st.push(q.front());
        q.pop();
        reversal(q);
        q.push(st.top());
        st.pop();
    }
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        reversal(q);
        return q;
    }
};
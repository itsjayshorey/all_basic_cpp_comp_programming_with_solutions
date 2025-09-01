#include<stack>
#include<queue>
using namespace std;
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int> an;
        queue<int> ans;
        if(k>q.size())
        {
            return q;
        }
        int j = k;
        while(j>0)
        {
            an.push(q.front());
            q.pop();
            j--;
        }
        while(k>0)
        {
            ans.push(an.top());
            an.pop();
            k--;
        }
        while(!q.empty())
        {
            ans.push(q.front());
            q.pop();
        }
        return ans;
    }
};
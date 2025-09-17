#include <vector>
#include <stack>
using namespace std;
class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        stack<int> stk;
        int n = arr.size();
        vector<int> ans(n,0);
        stk.push(-1);
        for(int i = n-1; i>=0; i--)
        {
            while(stk.top()>=arr[i])
            {
                stk.pop();
            }
            ans[i]=stk.top();
            stk.push(arr[i]);
        }
        return ans;
    }
};
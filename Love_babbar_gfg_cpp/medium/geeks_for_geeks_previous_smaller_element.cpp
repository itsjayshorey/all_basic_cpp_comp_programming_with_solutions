#include <vector>
#include <stack>
using namespace std;
class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        int n = arr.size();
        stack<int> stk;
        stk.push(-1);
        vector<int> ans;
        for(int i = 0; i<n ; i++)
        {
            while(stk.top()>=arr[i])
            {
                stk.pop();
            }
            ans.push_back(stk.top());
            stk.push(arr[i]);
        }
        return ans;
    }
};
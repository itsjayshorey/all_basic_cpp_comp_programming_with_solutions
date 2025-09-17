#include <vector>
#include <stack>
using namespace std;
class Solution {
  public:
    vector<int> nextsmallerele(vector<int> &arr,int &n)
    {
        stack<int> stk;
        stack<int> ind;
        stk.push(-1);
        ind.push(-1);
        vector<int> ans(n,0);
        for(int i = n-1; i>=0 ; i--)
        {
            while(stk.top()>=arr[i])
            {
                stk.pop();
                ind.pop();
            }
            ans[i]=(ind.top());
            stk.push(arr[i]);
            ind.push(i);
        }
        return ans;
    }
    vector<int> prevsmallerele(vector<int> &arr, int &n)
    {
        stack<int> stk;
        stack<int> ind;
        ind.push(-1);
        stk.push(-1);
        vector<int> ans(n,0);
        for(int i = 0; i<n ; i++)
        {
            while(stk.top()>=arr[i])
            {
                stk.pop();
                ind.pop();
            }
            ans[i]=(ind.top());
            stk.push(arr[i]);
            ind.push(i);
        }
        //reverse ans 
        return ans;
    }
    int getMaxArea(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> prevs = prevsmallerele(arr,n);
        vector<int> nexts = nextsmallerele(arr,n);
        int maxi = INT_MIN;
        for(int i = 0; i<n ;i++)
        {
            int l = arr[i];
            int b = nexts[i]-prevs[i]-1;
            if(nexts[i]==-1)
            {
                b = n - prevs[i]-1;
            }
            int area = l*b;
            maxi = max(maxi,area);
        }
        return maxi;
    }
};

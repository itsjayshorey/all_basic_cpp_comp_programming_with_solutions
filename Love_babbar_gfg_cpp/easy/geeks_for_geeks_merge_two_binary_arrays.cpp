// User function Template for C++
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
  public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        // priority_queue<int> max_heap;
        // for(int i = 0;i<n;i++)
        // {
        //     max_heap.push(a[i]);
        // }
        // for(int i = 0;i<m;i++)
        // {
        //     max_heap.push(b[i]);
        // }
        // vector<int> ans;
        // while(!max_heap.empty())
        // {
        //     ans.push_back(max_heap.top());
        //     max_heap.pop();
        // }
        // return ans;
        vector<int> ans;
        ans = a;
        ans.insert(ans.end(),b.begin(),b.end());
        make_heap(ans.begin(),ans.end());
        return ans;
    }
};
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int> answer(n+2,INT_MAX);
        answer[0] = 0;
        for(int i = 0; i<n; i++)
        {
            answer[i+1] = min(answer[i+1], answer[i]+abs(height[i+1]-height[i]));
            answer[i+2] = min(answer[i+2], answer[i]+abs(height[i+2]-height[i]));
            // cout<<answer[i+1]<<" "<<answer[i+2]<<endl;
        }
        return answer[n-1];
    }
};
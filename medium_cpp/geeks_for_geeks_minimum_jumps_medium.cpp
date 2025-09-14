#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        if(arr[0]==0)
        {
            return -1;
        }
        int maxreach = arr[0];
        int steps = arr[0];
        int ans = 1;
        for(int i = 1; i<arr.size(); i++)
        {
            if(i==(arr.size()-1))
            {
                return ans;
            }
            steps--;
            maxreach = max(maxreach,(i+arr[i]));
            if(steps==0)
            {
                ans++;
                if(maxreach<=i)
                {
                    return -1;
                }
                steps = maxreach - i; 
            }
        }
        return -1;
    }
};
//minimum_jumps_medium
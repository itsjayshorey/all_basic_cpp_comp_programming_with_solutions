// User function Template for C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    // Function to find the minimum number of elements in the first subset.
    int minSubset(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        long long sum = 0;
        for(int i = 0 ;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        int currentsum = 0;
        for(int i = arr.size()-1;i>=0;i--)
        {
            currentsum+=arr[i];
            sum-=arr[i];
            if(currentsum>sum)
            {
                return(arr.size()-i);
            }
        }
        return arr.size();
    }
};
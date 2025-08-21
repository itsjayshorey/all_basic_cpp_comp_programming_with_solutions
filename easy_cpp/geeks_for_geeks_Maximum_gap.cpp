#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    int maxDiff(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int diff = 0;
        for(int i = 0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]>diff)
            {
                diff = arr[i+1] - arr[i];
            }
        }
        return diff;
    }
};
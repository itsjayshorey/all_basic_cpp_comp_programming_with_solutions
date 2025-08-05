#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    int minTime(vector<int>& arr1, vector<int>& arr2) {
        // code here.
        long arr1_time = 0;
        long arr2_time = 0;
        int n;
        n=arr1.size();
        for(int i = 0; i<n ; i++)
        {
            if(i%2 == 0)
            {
                arr1_time = arr1_time + arr1[i];
                arr2_time = arr2_time + arr2[i];
            }
            else
            {
                arr1_time = arr1_time + arr2[i];
                arr2_time = arr2_time + arr1[i];
            }
        }
        if(arr1_time>arr2_time)
        {
            return arr2_time;
        }
        else
        {
            return arr1_time;
        }
    }
};

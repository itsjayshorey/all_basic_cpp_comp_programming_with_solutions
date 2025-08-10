#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // Your code
        sort(arr.begin(),arr.end());
        int sz = arr.size();
        for(int i = sz-1;i>1;i--)
        {
            int start = 0;
            int end = i-1;
            while(end>start)
            {
                int curr =(arr[end]+arr[start]); 
                if(curr<arr[i])
                {
                    start++;
                }
                else if(curr == arr[i])
                {
                    return true;
                }
                else
                {
                    end--;
                }
            }
        }
        return false;
    }
};
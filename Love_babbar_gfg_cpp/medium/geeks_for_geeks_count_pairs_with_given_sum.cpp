#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        sort(arr.begin(),arr.end());
        int i = 0;
        int j = arr.size() - 1;
        int ans = 0;
        while(j>i)
        {
            if((arr[i]+arr[j])>target)
            {
                j--;
            }
            else if((arr[i]+arr[j])<target)
            {
                i++;
            }
            if((arr[i]+arr[j])==target)
            {
                int k = 1;
                int m = 1;
                while(arr[i]==arr[i+1])
                {
                    k++;
                    i++;
                }
                while(arr[j]==arr[j-1])
                {
                    m++;
                    j--;
                }
                if(arr[i]==arr[j])
                {
                    ans+= (k*(k-1))/2;
                }
                else
                {
                    ans+= k*m;
                }
                i++;
                j--;
            }
        }
        return ans;
    }
};
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    long long countOddXorPairs(vector<int>& arr) {
        // code here
        long long ans = 0;
        long odd = 0;
        long even = 0;
        for(long i = 0;i<arr.size();i++)
        {
            if(arr[i]%2==1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        return(odd*even);
        // int sz = arr.size();
        // for(int i = 0;i<sz;i++)
        // {
        //     for(int j = i+1;j<sz;j++)
        //     {
        //         if((arr[i]^arr[j])%2==1)
        //         {
        //             ans++;
        //         }
        //     }
        // }
        // return ans;
    }
};

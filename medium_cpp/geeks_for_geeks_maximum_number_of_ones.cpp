#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        // int ans = 0;
        // int n = arr.size();
        // int current;
        // int numop;
        // for(int i = 0;i<n ;i++)
        // {
        //     current = 0;
        //     numop = k;
        //     for(int j = i;j<n && numop>=0;j++)
        //     {
        //         if(arr[j]==1)
        //         {
        //             current++;
        //         }
        //         else if(numop>0)
        //         {
        //             current++;
        //             numop--;
        //         }
        //         else
        //         {
        //             numop--;
        //         }

        //     }
        //     if(current>ans)
        //     {
        //         ans = current;
        //     }
        // }
        // return ans;
        int pt1 = 0;
        int end = arr.size() - 1;
        int pt2 = 0;
        int numop = k;
        int ans = 0;
        while((pt2<=end))
        {
            if(arr[pt2] == 0)
            {
                numop--;
            }
            while(numop<0)
            {
                if(arr[pt1]==0)
                {
                    numop++;
                }
                pt1++;
            }
            ans = max(ans,(pt2-pt1 + 1));
            pt2++;
        }
        return ans;
    }
};

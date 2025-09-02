#include <vector>
#include <map>
using namespace std;
class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        // int sum;
        // int ans = 0;
        // for(int i = 0;i<arr.size();i++)
        // {
        //     sum = 0;
        //     for(int j = i; j<arr.size();j++)
        //     {
        //         sum  += arr[j];
        //         if(sum == 0)
        //         {
        //             ans++;
        //         }
        //     }
        // }
        // return ans;
        //help from editorial
        map<int,int> col;
        int sum = 0;
        int ans = 0;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            sum += arr[i];
            if(sum==0)
            {
                ans++;
            }
            if(col[sum]>0)
            {
                ans += col[sum];
            }
            col[sum]++;
        }
        return ans;
    }
};
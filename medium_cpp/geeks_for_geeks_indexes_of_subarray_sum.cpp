#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int s_su = 0;
        int pt1 = 0;
        int pt2 = 0;
        int sz = arr.size();
        vector<int> temp;
        while(sz>pt2)
        {
            s_su+=arr[pt2];
            if(s_su>target)
            {
                while(s_su>target)
                {
                    s_su -= arr[pt1];
                    pt1++;
                }
            }
            if(s_su == target)
            {
                // return {pt2};
                return {pt1+1,pt2+1};
            }
            // temp.push_back(s_su);
            pt2++;
        }
        // return temp;
        return {-1};
    }
};//indexes of subarray sum
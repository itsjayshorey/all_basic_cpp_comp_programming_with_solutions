#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        // code here
        int maxi = 0;
        int curr = 0;
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        for(int i = 0 ; i<holes.size(); i++)
        {
            curr = abs(holes[i]-mices[i]);
            maxi = max(curr,maxi);
        }
        return maxi;
    }
};
//assign mic holes
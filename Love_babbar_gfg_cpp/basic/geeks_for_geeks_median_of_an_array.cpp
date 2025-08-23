#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int sz = arr.size();
        double an;
        if(sz%2==0)
        {
            an = double(arr[sz/2]+arr[(sz/2)-1])/2;
            return(an);
        }
        else
        {
            return(arr[(sz)/2]);
        }
    }
};
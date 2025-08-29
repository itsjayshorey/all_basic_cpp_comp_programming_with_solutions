#include<vector>
#include<iostream>
using namespace std;
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int pt1 = 0;
        int pt2 = arr.size() - 1;
        while(pt1<pt2)
        {
            int mid = (pt1 + pt2)/2;
            if(arr[mid]>arr[pt2])
            {
                pt1 = mid+1;
            }
            else 
            {
                pt2 = mid;
            }
        }
        return arr[pt2];
    }
};
#include<vector>
#include<climits>
using namespace std;
class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        arr.push_back(INT_MIN);
        int start = INT_MIN;
        for(int i = 0; i<arr.size(); i++)
        {
            if(arr[i]>start && arr[i]>arr[i+1])
            {
                return i;
            }
        }
        return -1;
    }
};
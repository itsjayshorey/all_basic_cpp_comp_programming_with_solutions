#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        long long prefixsum = 0;
        long long totalsum = 0;
        for(int i = 0; i<arr.size() ; i++)
        {
            totalsum+=arr[i];
        }
        for(int i = 0; i<arr.size(); i++)
        {
            if(prefixsum == (totalsum-arr[i]-prefixsum))
            {
                return i;
            }
            prefixsum+=arr[i];
        }
        return -1;
    }
};//equilibrium point
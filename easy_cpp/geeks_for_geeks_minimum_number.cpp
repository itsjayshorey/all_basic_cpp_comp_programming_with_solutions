// User function Template for C++
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int minimumNumber(int n, vector<int> &arr) {
        // Code here
        int gcd_ = 0;
        for(int i = 0 ; i<n ;i++)
        {
            gcd_ = gcd(gcd_, arr[i]);
        }
        return gcd_;
    }
};
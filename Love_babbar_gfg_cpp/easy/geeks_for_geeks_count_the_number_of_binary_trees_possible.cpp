// User function Template for C++
#include <map>
#include <iostream>
using namespace std;
class Solution {
  public:
    map<int,int> memo;
    Solution()
    {
        memo[0] = 1;
        memo[1] = 1;
    }
    int countBT(int h) {
        // code here
        if(h<=1)
        {
            return 1;
        }
        if(memo[h]!=0)
        {
            return memo[h];
        }
        int h1 = countBT(h-1);
        int h2 = countBT(h-2);
        memo[h] = h1*h1 + 2*h1*h2;
        return memo[h];
    }
};
// User function Template for C++
#include <iostream>
using namespace std;
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int op = n;
        int oa = 0;
        while(op>0)
        {
            int k = op%10;
            oa+=k*k*k;
            op/=10;
        }
        // cout<<op<<' '<<oa;
        return(n==oa);
    }
};
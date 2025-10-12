#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int k=0;
        while(n>0)
        {
            k+=n & 1;
            n = n>>1;
        }
        return(k==1);
    }
};
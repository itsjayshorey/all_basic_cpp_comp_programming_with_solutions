#include <iostream>
using namespace std;
class Solution {
  public:
    int findPosition(int n) {
        // code here
        int num_set_bits = 0;
        int pos = 0;
        while(n>0)
        {
            if(n%2 == 1)
            {
                num_set_bits++;
            }
            pos++;
            n = n>>1;
        }
        if(num_set_bits!=1)
        {
            return -1;
        }
        else
        {
            return pos;
        }
    }
};
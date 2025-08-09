#include <iostream>
#include <vector>
using namespace std;

/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        if(n==0)
        {
            return 5;
        }
        int ind = 1;
        int val = 0;
        while(n/ind !=0)
        {
            val = n/ind;
            if(val%10==0)
            {
                n = n+ind*5;
            }
            ind = ind*10;
        }
        return n;
    }
};
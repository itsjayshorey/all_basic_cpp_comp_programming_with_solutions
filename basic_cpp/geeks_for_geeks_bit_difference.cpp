#include <iostream>
using namespace std;
class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
        int ans = a^b;
        int an = 0;
        while(ans>0)
        {
            if(ans%2 != 0)
            {
                an++;
            }
            // ans=ans/2;
            ans = ans>>1;
        }
        return an;
    }
};
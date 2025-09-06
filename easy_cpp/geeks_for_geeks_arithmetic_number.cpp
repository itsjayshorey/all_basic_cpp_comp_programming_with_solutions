// User function Template for C++
#include <iostream>
using namespace std;
class Solution {
  public:
    int inSequence(int a, int b, int c) {
        // code here
        b = b-a;
        if(b%c==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
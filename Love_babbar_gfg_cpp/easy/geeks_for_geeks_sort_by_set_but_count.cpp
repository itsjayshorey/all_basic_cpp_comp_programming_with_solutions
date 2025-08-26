#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
  public:
    static int bitcount(int a)
    {
        int bitc = 0;
        while(a>0)
        {
            if((a & 1) == 1)
            {
                bitc++;
                a=a>>1;
            }
            else
            {
                a = a>>1;
            }
        }
        return bitc;
    }
    static bool cmp(int a, int b)
    {
        int ca = bitcount(a);
        int cb = bitcount(b);
        return ca>cb;
    }
    void sortBySetBitCount(int arr[], int n) {
        // Your code goes here
        stable_sort(arr,arr+n,cmp);
    }
};
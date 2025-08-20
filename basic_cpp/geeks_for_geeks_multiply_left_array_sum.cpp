//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int sz = arr.size();
        int left = 0;
        int right = 0;
        int l=0;
        int r=sz-1;
        while(r>l)
        {
            left = left + arr[l++];
            right = right + arr[r--];
        }
        if(l==r)
        {
            right= right + arr[l];
        }
        return left*right;
    }
};
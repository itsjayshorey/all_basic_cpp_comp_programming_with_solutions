#include <iostream>
#include <vector>
using namespace std;

// User function template for C++
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        // code here
        l--;
        r--;
        int temp;
        while(r>l)
        {
            temp = arr[r];
            arr[r] = arr[l];
            arr[l] = temp;
            l++;
            r--;
        }
        return arr;
    }
};
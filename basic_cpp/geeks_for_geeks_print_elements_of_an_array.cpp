// User function template for C++
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    // Just print the space seperated array elements
    void printArray(vector<int> &arr) {
        // code here
        int sz = arr.size();
        for(int i = 0;i<sz;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
// User function Template for C++
#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        if(arr.empty())
        {
            return;
        }
        int k = arr.back();
        arr.pop_back();
        arr.insert(arr.begin(),k);
    }
};
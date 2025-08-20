#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        long long sum = 0;
        for(int i = 0 ;i<arr.size();i++)
        {
            sum = sum+arr[i];
            arr[i] = sum;
        }
        return arr;
    }
};
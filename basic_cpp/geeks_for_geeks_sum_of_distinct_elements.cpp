// User function template for C++
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int findSum(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int sum = 0;
        int i = 0;
        while(i<arr.size())
        {
            while(arr[i]==arr[i+1])
            {
                i = i+1;
            }
            sum = sum+arr[i];
            i = i+1;
        }
        return sum;
    }
};
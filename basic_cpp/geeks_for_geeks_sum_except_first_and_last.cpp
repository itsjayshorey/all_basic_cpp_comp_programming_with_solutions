#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    /*You are required to complete this method*/
    int sumExceptFirstLast(vector<int>& arr) {
        // Your code here
        int sum = 0;
        for(int i = 1;i<arr.size()-1;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
};
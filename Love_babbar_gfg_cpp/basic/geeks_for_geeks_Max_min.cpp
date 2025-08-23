#include<iostream>
using namespace std;
// User function Template for C++

class Solution {
  public:
    int findSum(int arr[], int N) {
        // code here.
        int max = -1000000007;
        int min = 1000000007;
        for(int i = 0;i<N;i++)
        {
            if(max<arr[i])
            {
                max = arr[i];
            }
            if(min>arr[i])
            {
                min = arr[i];
            }
        }
        return max + min;
    }
};
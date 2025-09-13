#include <iostream>
using namespace std;
class Solution {
  public:
    bool isMaxHeap(int arr[], int n) {
        // Your code goes here
        int left;
        int right;
        for(int i = 0 ; i<n-2 ; i++)
        {
            left = 2*i + 1;
            right = 2*i + 2;
            if(arr[left]>arr[i])
            {
                return false;
            }
            if(arr[right]>arr[i])
            {
                return false;
            }
        }
        return true;
    }
};
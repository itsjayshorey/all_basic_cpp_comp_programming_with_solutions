#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int start = 0;
        int end = n-1;
        while(start+1<end)
        {
            if(arr[start]>arr[end])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        if(arr[start]>arr[end])
        {
            return arr[end];
        }
        else
        {
            return arr[start];
        }
    }
};

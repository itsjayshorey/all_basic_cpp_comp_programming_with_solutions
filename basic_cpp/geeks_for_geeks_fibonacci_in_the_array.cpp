#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int countFibonacciNumbers(vector<long long>& arr) {
        // code here
        int count = 0;
        sort(arr.begin(),arr.end());
        long long start = 1;
        long long second = 1;
        for(int i=0 ; i<arr.size(); i++)
        {
            while(arr[i]>second)
            {
                long long temp = second;
                second = start + second;
                start = temp;
            }
            if(arr[i]==second)
            {
                count = count + 1;
            }
        }
        return count;
        
    }
};

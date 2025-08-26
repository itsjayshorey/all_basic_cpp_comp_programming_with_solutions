// User function template for C++
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        // code here
        
        int first = 0;
        int second = 1;
        vector<int> ans;
        if(n==0)
        {
            return ans;
        }
        else if(n==1)
        {
            ans.push_back(first);
            return ans;
        }
        ans.push_back(first);
        ans.push_back(second);
        int temp;
        for(int i = 2 ; i<n ; i++)
        {
            temp = second;
            second = second + first;
            first = temp;
            ans.push_back(second);
        }
        return ans;
    }
};
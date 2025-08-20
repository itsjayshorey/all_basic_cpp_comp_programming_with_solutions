// User function Template for C++
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& arr) {
        // Write your code here.
        arr.insert(arr.begin(),0);
        arr.push_back(0);
        for(int i = 1;i<=m;i++)
        {
            if(arr[i] == 0 && arr[i-1] == 0 && arr[i+1] == 0)
            {
                arr[i] = 1;
                n--;
            }
        }
        if(n>0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
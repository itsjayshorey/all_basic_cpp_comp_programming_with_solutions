#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
        int sz = arr.size();
        int max = 0;
        for(int i = 0;i<sz;i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        vector<int> ans_2(max+1,0);
        for(int i = 0;i<sz;i++)
        {
            ans_2[arr[i]]++;
        }
        for(int i = 0;i<max+1;i++)
        {
            if(ans_2[i]!=k && ans_2[i]>0)
            {
                return i;
            }
        }
    }
};
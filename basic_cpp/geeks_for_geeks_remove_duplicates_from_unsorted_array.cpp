// User function Template for C++
#include <iostream>
#include <vector>
using namespace std;    
// Function to remove duplicates from an unsorted array

class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        vector<int> ans;
        int sz = arr.size();
        int max = -1;
        for(int i = 0;i<sz ; i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        vector<int> col(max+1,0);
        for(int i = 0; i<sz;i++)
        {
            if(col[arr[i]]==0)
            {
                col[arr[i]]=col[arr[i]]+1;
                ans.push_back(arr[i]);
            }
        }
        return ans;
        
    }
};
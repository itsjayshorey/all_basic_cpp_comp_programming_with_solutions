// User function template for C++
#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans;
        ans=arr[0];
        int j;
        for(int i = 0; i < arr.size() ; i++)
        {
                j = 0;
                while((j<ans.size()) && (ans[j] == arr[i][j]))
                {
                    j++;
                }
                while((j<ans.size()) && (ans[j] != arr[i][j]))
                {
                    ans.pop_back();
                }
        }
        return ans;
    }
};
// User function template for C++
#include<iostream>
#include<map>
using namespace std;

class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        map<char,int> col;
        string ans;
        ans = "";
        for(int i = 0;i<s.size(); i++)
        {
            if(col[s[i]]==0)
            {
                ans.push_back(s[i]);
            }
            col[s[i]]++;
        }
        return ans;
    }
};
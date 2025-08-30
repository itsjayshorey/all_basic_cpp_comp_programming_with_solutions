#include<iostream>
#include<string>
using namespace std;
class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        string ans = "";
        s.push_back('*');
        for(int i = 0;i<s.size()-1;i++)
        {
            ans.push_back(s[i]);
            while(s[i] == s[i+1])
            {
                i++;
            }
        }
        return ans;
    }
};
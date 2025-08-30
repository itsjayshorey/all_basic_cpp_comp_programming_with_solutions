#include<iostream>
#include<string>
using namespace std;
class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int sz = s.size();
        for(int i = 0;i<sz/2;i++)
        {
            if(s[i] != s[sz-i-1])
            {
                return false;
            }
        }
        return true;
    }
};
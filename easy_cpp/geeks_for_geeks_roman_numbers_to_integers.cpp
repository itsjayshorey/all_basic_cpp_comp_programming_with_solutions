#include<iostream>
#include<map>
#include<string>
using namespace std;
class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        map<char,int> mp1;
        mp1['I'] = 1;
        mp1['V'] = 5;
        mp1['X'] = 10;
        mp1['L'] = 50;
        mp1['C'] = 100;
        mp1['D'] = 500;
        mp1['M'] = 1000;
        int ans = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(mp1[s[i+1]]>mp1[s[i]])
            {
                ans += mp1[s[i+1]];
                ans -= mp1[s[i]];
                i++;
            }
            else
            {
                ans += mp1[s[i]];
            }
        }
        return ans;
    }
};
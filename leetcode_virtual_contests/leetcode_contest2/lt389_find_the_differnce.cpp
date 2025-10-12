#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mapi;
        for(int i = 0; i<s.size(); i++)
            {
                mapi[s[i]]++;
            }
        for(int i = 0; i <t.size();i++)
            {
                if(mapi[t[i]]==0)
                {
                    return t[i];
                }
                else
                {
                    mapi[t[i]]--;
                }
            }
        return '0';
    }
};
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mapi;
        int n = s.size();
        for(int i = 0 ; i<n ;i++)
            {
                mapi[s[i]]++;
            }
        for(int i = 0 ; i<n ; i++)
            {
                if(mapi[s[i]]==1)
                {
                    return i;
                }
            }
        return -1;
    }
};
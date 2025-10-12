#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptr1 = 0;
        int ptr2 = 0;
        int n = s.size();
        int st = t.size();
        while(ptr1<n && ptr2<st)
            {
                if(t[ptr2]==s[ptr1])
                {
                    ptr1++;
                }
                ptr2++;
            }
        if(ptr1 == n)return true;
        return false;
    }
};
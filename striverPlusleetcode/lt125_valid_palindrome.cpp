#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    bool rec(string s, int n, int i,int p )
    {
        if(i>=p)
        {
            return true;
        }
        if(s[i]!=s[n-i])
        {
            return false;
        }
        else
        {
            return rec(s,n,i+1,p);
        }
    }
    bool isPalindrome(string s) {
        int n = s.size();
        string s2 = "";
        for(int i = 0 ; i<n ;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s2.push_back(char(s[i]-'A'+'a'));
            }
            if(s[i]>='a' && s[i]<='z')
            {
                s2.push_back(s[i]);
            }
            if(s[i]>='0' && s[i]<='9')
            {
                s2.push_back(s[i]);
            }
        }
        // cout<<s2;
        if(s2.size()<=1)
        {
            return true;
        }
        cout<<s2<<endl;
        int k = s2.size();
        for(int i = 0; i <= k/2; i++)
        {
            if(s2[i] != s2[k-i-1])
            {
                return false;
            }
        }
        return true;
        // return rec(s2,s2.size()-1,0,s2.size()/2);

    }
};
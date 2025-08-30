#include<iostream>
#include<string>
using namespace std;
class Solution {
  public:
    int minFlips(string& s) {
        // code here
        string s2 = s;
        int flip1 = 0;
        int flip2 = 0;
        if(s2[0]!='0')
        {
            flip1++;
            s2[0] = '0';
        }
        for(int i = 0;i<s.size()-1;i++)
        {
            if(s2[i]=='0')
            {
                if(s2[i+1] != '1')
                {
                    s2[i+1] = '1';
                    flip1++;
                }
            }
            if(s2[i] == '1')
            {
                if(s2[i+1] != '0')
                {
                    s2[i+1] = '0';
                    flip1++;
                }
            }
        }
        if(s[0]!='1')
        {
            flip2++;
            s[0] = '1';
        }
        for(int i = 0;i<s.size()-1;i++)
        {
            if(s[i]=='1')
            {
                if(s[i+1]!='0')
                {
                    s[i+1] = '0';
                    flip2++;
                }
            }
            if(s[i] == '0')
            {
                if(s[i+1] != '1')
                {
                    s[i+1] = '1';
                    flip2++;
                }
            }
        }
        if(flip1<flip2)
        {
            return flip1;
        }
        else
        {
            return flip2;
        }
    }
};

#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
  public:
    string add(string &st1, string &st2)
    {
        if(st1.size()==0)
        {
            return st2;
        }
        if(st2.size()==0)
        {
            return st1;
        }
        int carry = 0;
        string ans = "";
        int sz1 = st1.size();
        int sz2 = st2.size();
        int a,b,c;
        int i;
        for(i = 0 ; i<sz1 && i<sz2; i++)
        {
            a = int(st1[sz1-1-i] - '0');
            b = int(st2[sz2-1-i] - '0');
            c = a + b + carry;
            carry = c/10;
            ans.push_back(char(c%10+'0'));
        }
        while(i<sz1)
        {
           a = int(st1[sz1-1-i] - '0');
           c = a + carry;
           carry = c/10;
           ans.push_back(char(c%10+'0'));
           i++;
        }
        while(i<sz2)
        {
           a = int(st2[sz2-1-i] - '0');
           c = a + carry;
           carry = c/10;
           ans.push_back(char(c%10+'0'));
           i++;
        }        
        if(carry>0)
        {
            ans.push_back(char(carry+'0'));
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string minSum(vector<int> &arr) {
        // code here
        string num1 = "";
        string num2 = "";
        // sort(arr.begin(),arr.end());
        map<int,int> mp;
        for(int i = 0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        bool n1 = true;
        for(int i = 0;i<=9;i++)
        {
            while(mp[i]>0)
            {
                
               if(n1)
               {
                   num1.push_back(char(i+'0'));
                   n1 = false;
                   mp[i]--;
                }
            else
               {
                   num2.push_back(char(i+'0'));
                   n1 = true;
                   mp[i]--;
                }
            }
        }
        int sz = arr.size();
        // for(int i = 0;i<sz;i++)
        // {
        //     if(i%2==0)
        //     {
        //         num1.push_back(char('0'+arr[i]));
        //     }
        //     else
        //     {
        //         num2.push_back(char('0'+arr[i]));
        //     }
        // }
        num1 = add(num1,num2);
        string ans = "";
        int i = 0;
        while(i<num1.size() && num1[i]=='0')
        {
            i++;
        }
        for(int j = i ;j<num1.size();j++)
        {
            ans.push_back(num1[j]);
        }
        return ans;
    }
};
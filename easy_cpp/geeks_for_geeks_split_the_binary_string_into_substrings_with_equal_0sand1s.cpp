#include<iostream>
#include<string>
using namespace std;
class Solution {
  public:
    int maxSubStr(string str) {
        // Write your code here
        int ans = 0;
        int count = 0;
        int last = -1;
        for(int i = 0; i<str.size(); i++)
        {
            if(str[i] == '0')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                ans++;
                last = i;
            }
        }
        if(last!=str.size() - 1)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};

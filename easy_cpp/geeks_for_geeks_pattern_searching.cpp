// User function template for C++
#include<iostream>
#include<string>
using namespace std;
class Solution {
  public:

    int search(string text, string pat) {
        // Your code goes here
        int szt = text.size();
        int szp = pat.size();
        int k;
        int ans = 0;
        for(int i = 0;i<szt;i++)
        {
            if(text[i] == pat[0])
            {
                k = i;
                ans = 1;
                for(int j = 0;j<szp;j++)
                {
                    if(text[k]!=pat[j])
                    {
                        ans=0;
                        break;
                    }
                    k++;
                }
            }
            if(ans)
            {
                return 1;
            }
        }
        return 0;
    }
};
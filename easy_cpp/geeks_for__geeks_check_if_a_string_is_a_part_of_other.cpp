#include<iostream>
#include<string>
using namespace std;
class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
        int p1 = s1.size()-1;
        int p2 = s2.size();
        for(int i = p2-1; i>=0; i--)
        {
            if(s1[p1] == s2[i])
            {
                s1.pop_back();
                p1--;
            }
        }
        return (s1.empty());
    }
};
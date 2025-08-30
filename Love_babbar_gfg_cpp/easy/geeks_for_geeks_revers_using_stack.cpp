#include<iostream>
using namespace std;    
class Solution {
  public:
    string reverse(const string& S) {
        // code here
        string ans = "";
        string s2 = S;
        while(!s2.empty())
        {
            ans.push_back(s2.back());
            s2.erase(s2.end()-1);
        }
        return ans;
    }
};
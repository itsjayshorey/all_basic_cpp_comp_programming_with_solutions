#include<map>
#include<string>
#include<stack>
using namespace std;
class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        map<char,char> mp1;
        // mp1['['] = '[';
        mp1['{'] = '}';
        mp1['['] = ']';
        mp1['('] = ')';
        stack<char> stk;
        for(int i = 0;i<s.size();i++)
        {
            if(!stk.empty())
            {
                if(mp1[stk.top()]==s[i])
                {
                    stk.pop();
                }
                else
                {
                    stk.push(s[i]);
                }
            }
            else
            {
                stk.push(s[i]);
            }
        }
        return(stk.empty());
    }
};
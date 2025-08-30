#include<iostream>
// using namespace std;    
// class Solution {
//   public:
//     string reverse(const string& S) {
//         // code here
//         string ans = "";
//         string s2 = S;
//         while(!s2.empty())
//         {
//             ans.push_back(s2.back());
//             s2.erase(s2.end()-1);
//         }
//         return ans;
//     }
// };
#include<stack>
using namespace std;
class Solution {
  public:
    string reverse(const string& S) {
        // code here
        // string ans = "";
        // string s2 = S;
        // while(!s2.empty())
        // {
        //     ans.push_back(s2.back());
        //     s2.erase(s2.end()-1);
        // }
        // return ans;
        stack<char> stk;
        for(int i = 0;i<S.size();i++)
        {
            stk.push(S[i]);
        }
        string ans = "";
        while(!stk.empty())
        {
            ans.push_back(stk.top());
            stk.pop();
        }
        return ans;
    }
};
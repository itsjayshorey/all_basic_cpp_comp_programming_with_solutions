#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string ans = "";
        string sp = " ";
        int i = s.size()-1;
        while(i>=0)
        {
            if(s[i]==' ')
            {
                reverse(temp.begin(),temp.end());
                ans.insert(ans.end(),temp.begin(),temp.end());
                if(temp!="" && ans!="")
                {
                    ans.insert(ans.end(),sp.begin(),sp.end());
                }
                temp = "";
            }
            else
            {
                temp.push_back(s[i]);
            }
            i--;
        }
        if(temp!="")
        {
            reverse(temp.begin(),temp.end());
            ans.insert(ans.end(),temp.begin(),temp.end());

        }
        int n = ans.size();
        if(ans[n-1]==' ')
        {
            ans.erase(ans.begin()+n-1);
        }
        return ans;
    }
};
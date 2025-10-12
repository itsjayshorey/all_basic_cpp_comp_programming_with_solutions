#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans = "";
        int i = n-1;
        if(i<0)return"";
        bool ok = false;
        while(i>=0)
        {
            if(int(num[i]-'0')%2==1 || (ok))
            {
                ok = true;
                ans.push_back(num[i]);
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
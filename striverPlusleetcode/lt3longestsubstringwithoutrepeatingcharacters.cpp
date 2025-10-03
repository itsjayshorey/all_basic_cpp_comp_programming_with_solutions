#include <string>
#include <map>
#include <algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> curr;
        int ptr = 0;
        int n = s.size();
        int k = 0;
        int ans = 0;
        for(int i = 0; i<n; i++)
        {
            curr[s[i]]++;
            k++;
            while(curr[s[i]]>1)
            {
                curr[s[ptr]]--;
                ptr++;
                k--;
            }
            ans = max(ans,k);
        }
        return ans;
    }
};
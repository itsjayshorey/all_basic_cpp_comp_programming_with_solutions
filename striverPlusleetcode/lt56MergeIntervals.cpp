#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans; 
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<int> start;
        vector<int> endi;
        for(int i = 0; i <intervals.size();i++)
        {
            endi.push_back(intervals[i][1]);
        }
        sort(endi.begin(),endi.end());
        int ptr1 = 0;
        int ptr2 = 0;
        int finale = 0;
        int st;
        while(ptr1<n && ptr2<n)
        {
            finale = endi[ptr2];
            st = intervals[ptr1][0];
            // bool p = false;
            while(ptr1<n && intervals[ptr1][0]<=finale)
            {
                finale = max(intervals[ptr1][1],finale);
                ptr1++;
                // p = true;
            }
            ans.push_back({st,finale});
            while(ptr2<n && endi[ptr2]<=finale)
                ptr2++;
        }
        return ans;
    }
};
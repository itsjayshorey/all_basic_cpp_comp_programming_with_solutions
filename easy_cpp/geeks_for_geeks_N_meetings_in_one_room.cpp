#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    class meet
    {
        public:
        int st;
        int en;
        int di;
        meet()
        {
            
        };
    };
    static bool cmp(meet m1, meet m2)
    {
        if(m1.en<m2.en)
        {
            return true;
        }
        else if(m1.en == m2.en)
        {
            if(m1.st>m2.st)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            
            return false;
        }
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<meet> col;
        for(int i = 0;i<start.size();i++)
        {
            col.push_back(meet());
            col[i].st = start[i];
            col[i].en = end[i];
            col[i].di = end[i]-start[i];
        }
        sort(col.begin(),col.end(),cmp);
        int currentwindow = -1;
        int ans = 0;
        for(int i = 0;i<col.size();i++)
        {
            if(currentwindow<col[i].st)
            {
                ans++;
                currentwindow = col[i].en;
            }
        }
        return ans;
        
    }
};
// User function Template for C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> anchor;
        vector<vector<int>> ans;
        int an = Mat[0].size();
        for(int i = 0 ; i<Mat.size(); i++)
        {
            anchor.insert(anchor.end(),Mat[i].begin(),Mat[i].end());
        }
        sort(anchor.begin(),anchor.end());
        int curr;
        vector<int> temp;
        // return anchor;
        for(int i = 0; i<anchor.size();i++)
        {
            curr = an;
            while(curr>0)
            {
                temp.push_back(anchor[i]);
                i++;
                curr--;
            }
            i--;
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
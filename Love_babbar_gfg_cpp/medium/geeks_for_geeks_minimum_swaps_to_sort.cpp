#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& arr) {
        // Code here
        vector<pair<int,int>> srted;
        pair<int,int> temp;
        int n = arr.size();
        map<int,int> visited;
        int ans = 0;
        for(int i = 0 ; i<n ; i++)
        {
            temp.first = arr[i];
            temp.second = i;
            srted.push_back(temp);
        }
        sort(srted.begin(), srted.end());
        int tmp = 0;
        int k;
        for(int i = 0 ; i <n;i++)
        {
            if(!visited[srted[i].first])
            {
                visited[srted[i].first]++;
                k = srted[i].second;
                tmp = 0;
                while(srted[k].first!=srted[i].first)
                {
                    visited[srted[k].first]++;
                    k = srted[k].second;
                    tmp++;
                }
                ans+=tmp;
            }
        }
        return ans;
    }
};
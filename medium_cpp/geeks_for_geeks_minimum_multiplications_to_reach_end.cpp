// User function Template for C++
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        // map<int,bool> visited;
        vector<bool> visited(100000,false);
        queue<pair<int,int>> q;
        pair<int,int> tmp;
        start = start%100000;
        q.push({start,0});
        int temp;
        int st;
        int en;
        while(!q.empty())
        {
            tmp = q.front();
            st = tmp.first;
            st = st%100000;
            en = tmp.second;
            if(st == end)
            {
                return en;
            }
            q.pop();
            if(!visited[st])
            {
                visited[st] = true;
                for(int i = 0 ; i<arr.size(); i++)
                {
                    q.push({st*arr[i],en+1});
                }
            }
        }
        return -1;
    }
};

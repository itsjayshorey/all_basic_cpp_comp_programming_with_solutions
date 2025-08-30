#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int diff = 10000007;
        int temp;
        for(int i = 0;i<=a.size()-m;i++)
        {
            temp =  a[i+m-1] - a[i];
            if(temp<diff)
            {
                diff = temp;
            }
        }
        return diff;
    }
};
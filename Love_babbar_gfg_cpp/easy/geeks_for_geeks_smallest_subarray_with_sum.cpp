#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int pt1 = 0;
        int pt2 = 0;
        int sum = 0;
        vector<int> ans;
        arr.push_back(0);
        while((pt1<arr.size()) && pt2<arr.size())
        {
            while(((pt1<arr.size()) && pt2<arr.size()) && sum>x)
            {
                sum = sum - arr[pt1];
                ans.push_back((pt2-pt1));
                pt1++;
            }
            sum = sum + arr[pt2];
            pt2 ++;
            
        }
        if(!ans.empty())
        {
            int min = INT_MAX;
            for(int i = 0; i<ans.size(); i++)
            {
                if(ans[i]<min)
                {
                    min = ans[i];
                }
            }
            return min;
        }
        return 0;
    }
};
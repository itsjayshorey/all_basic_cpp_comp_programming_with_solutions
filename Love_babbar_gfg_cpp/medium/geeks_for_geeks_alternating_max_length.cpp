#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        // Code here
        int maxcp1 = 0;
        int cp1 = 1;
        bool swit = true;
        bool swit2 = true;
        int cp2 = 1;
        int maxcp2 = 0;
        for(int i = 0 ; i<arr.size()-1 ; i++)
        {
            if(arr[i]>arr[i+1])
            {
                if(swit)
                {
                    cp1++;
                    swit = false;
                }
                if(!swit2)
                {
                    cp2++;
                    swit2 = true;
                }
            }
            else if(arr[i]<arr[i+1])
            {
                if(swit2)
                {
                    cp2++;
                    swit2 = false;
                }
                if(!swit)
                {
                    cp1++;
                    swit = true;
                }
            }
            maxcp1 = max(maxcp1,cp1);
            maxcp2 = max(maxcp2,cp2);
        }
        maxcp1 = max(maxcp1,cp1);
        maxcp2 = max(maxcp2,cp2);
        int ans = max(maxcp1,maxcp2);
        return ans;
    }
};
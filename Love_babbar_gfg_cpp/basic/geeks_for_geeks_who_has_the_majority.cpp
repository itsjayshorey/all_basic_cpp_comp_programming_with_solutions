#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
  public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        // code here
        map<int,int> mp1;

        for(int i = 0; i<arr.size() ; i++)
        {
            mp1[arr[i]]++;
        }
        if(mp1[x]>mp1[y])
        {
            return x;
        }
        else if(mp1[x] == mp1[y])
        {
            if(x>y)
            {
                return y;
            }
            else
            {
                return x;
            }
        }
        else
        {
            return y;
        }
    }
};
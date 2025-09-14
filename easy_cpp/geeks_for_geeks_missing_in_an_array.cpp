#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        vector<bool> mp(arr.size()+1,true);
        for(int i = 0; i<arr.size(); i++)
        {
            mp[arr[i]] = false;
        }
        for(int i = 1; i<arr.size()+2; i++)
        {
            if(mp[i])
            {
                return i;
            }
        }
        return 0;
    }
};  //missing in an array
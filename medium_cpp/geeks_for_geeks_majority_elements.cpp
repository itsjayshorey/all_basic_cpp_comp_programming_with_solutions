#include <map>
#include <vector>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int sz = arr.size();
        int maj  = sz/2;
        map<int,int> mp1;
        for(int i = 0 ; i<sz ; i++)
        {
            mp1[arr[i]]++;
            if(mp1[arr[i]]>maj)
            {
                return arr[i];
            }
        }
        return -1;
    }
};
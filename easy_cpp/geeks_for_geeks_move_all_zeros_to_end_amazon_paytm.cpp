#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int sz = arr.size()-1;
        while(arr[sz]==0)
        {
            sz--;
        }
        while(sz>=0)
        {
            if(arr[sz]!=0)
            {
                sz--;
            }
            else if(arr[sz] == 0)
            {
                arr.erase(arr.begin()+sz);
                arr.push_back(0);
                sz--;
            }
        }
    }
};
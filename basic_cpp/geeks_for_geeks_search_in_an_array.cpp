#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int search(int k, vector<int>& arr) {
        // code here
        int pos = -1;
        int sz = arr.size();
        for(int i=0;i<sz;i++)
        {
            if(arr[i]==k)
            {
                return i+1;
            }
        }
        return pos;
    }
};

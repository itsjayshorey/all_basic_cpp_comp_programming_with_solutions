#include <iostream>
#include <vector>
using namespace std;
    
class Solution {
  public:
    int findIndex(vector<int>& arr, int x) {
        // code
        int index = -1;
        for(int i = 0 ; i<arr.size(); i++)
        {
            if(x==arr[i])
            {
                index = i+1;
            }
        }
        return index;
    }
};
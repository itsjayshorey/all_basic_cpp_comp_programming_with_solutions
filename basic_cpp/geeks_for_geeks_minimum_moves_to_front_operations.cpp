#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
  public:
    // Function to find the minimum number of moves required.
    int minMoves(vector<int> &arr) {
        // code here.
        int required = arr.size();
        for(int i = arr.size(); i>=0; i--)
        {
            if(arr[i]==required)
            {
                required--;
            }
        }
        return required;
    }
};
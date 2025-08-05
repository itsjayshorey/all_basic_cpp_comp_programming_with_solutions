#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int countOfElements(int x, vector<int> &arr) {

        // Code Here
        int ans = 0;
        for(int i=0; i< arr.size(); i++)
        {
            if(arr[i]<=x)
            {
                ans++;
            }
        }
        return ans;
    }
};
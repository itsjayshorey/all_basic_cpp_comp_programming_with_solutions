#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        for(int i = 0; i<arr.size(); i++)
        {
            if(x == arr[i])
            {
                return i;
            }
        }
        return -1;
    }
};
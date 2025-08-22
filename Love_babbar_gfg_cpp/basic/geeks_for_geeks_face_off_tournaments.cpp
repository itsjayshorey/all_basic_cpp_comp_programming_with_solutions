#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to determine the winner based on divisible counts
    string winner(vector<int> &arr, int m, int n) {
        // Code here
        int ram = 0;
        int rohan = 0;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            if(arr[i]%m == 0)
            {
                ram++;
            }
            if(arr[i]%n == 0)
            {
                rohan++;
            }
        }
        if(ram>rohan)
        {
            return "Ram";
        }
        else if(rohan>ram)
        {
            return "Rohan";
        }
        else
        {
            return "Both";
        }
    }
};
#include <algorithm>

using namespace std;
class Solution {
  public:
    int countSquares(int n) {
        // code here
        double curr = n;
        curr = sqrt(curr);
        if(curr-int(curr) == 0)
        {
            return int(curr-1);
        }
        else
        {
            return int(curr);
        }
    }
};
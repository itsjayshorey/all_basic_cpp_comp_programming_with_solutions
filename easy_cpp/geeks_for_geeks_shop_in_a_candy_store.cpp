#include <vector>  
#include <algorithm>
using namespace std;
class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        // Code here
        int pt1 = 0;
        int pt2 = prices.size();
        int min = 0;
        int max = 0;
        int i = 0;
        int j = pt2;
        int kp;
        sort(prices.begin(),prices.end());
        while(i<j)
        {
            min += prices[i];
            kp = k;
            while(kp>0)
            {
                kp--;
                j--;
            }
            i++;
        }
        while(pt1<pt2)
        {
            max += prices[pt2-1];
            kp = k;
            while(kp>0)
            {
                kp--;
                pt1++;
            }
            pt2--;
        }
        return {min,max};
    }
};
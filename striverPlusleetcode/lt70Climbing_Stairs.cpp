class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        int k = 0;
        int j = 1;
        for(int i = 0 ; i<n ; i++)
        {
            int temp = j;
            j = j+k;
            k = temp;
        }
        return j;
    }
};
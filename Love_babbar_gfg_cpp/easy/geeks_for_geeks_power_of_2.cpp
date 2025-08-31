class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        int count = 0;
        while(n>0)
        {
            count += n&1;
            n = n>>1;
        }
        if(count>1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
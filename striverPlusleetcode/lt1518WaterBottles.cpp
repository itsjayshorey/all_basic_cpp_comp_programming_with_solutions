class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int ans = numBottles;
       int rem = 0;
       while(numBottles!=0)
       {
        rem = numBottles%numExchange;
        numBottles = numBottles/numExchange;
        ans+=numBottles;
        if(numBottles>0)
            numBottles+=rem;
       } 
       return ans;
    }
};
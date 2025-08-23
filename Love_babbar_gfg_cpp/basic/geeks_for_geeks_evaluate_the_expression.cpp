
class Solution {
  public:
    int evaluate_exp(int n) {
        // Code here
        return (n&1 == 1) ? -1:1;
    }
};
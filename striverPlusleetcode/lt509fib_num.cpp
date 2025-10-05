#include <vector>
using namespace std;
class Solution {
public:
    int rec(int n, vector<int> &fib)
    {
        if(n<1)return 0;
        if(n==1)return 1; 
        if(fib[n]!=0)return fib[n];
        fib[n] = rec(n-1,fib) + rec(n-2,fib);
        return fib[n];
    }
    int fib(int n) {
        vector<int> ol(n+1,0);
        return rec(n,ol);
    }
};
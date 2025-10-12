#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    int integerReplacement(int n) {
        long an = n;
        int iter = 0;
        stack<long> stk;
        stack<long> stk2;
        stk.push(an);
        while(!stk.empty())
            {
                while(!stk.empty())
                    {
                        long tp = stk.top();
                        stk.pop();
                        if(tp==1)return iter;
                        if(tp%2==0)
                        {
                            stk2.push(tp/2);
                        }
                        else
                        {
                            stk2.push(tp+1);
                            stk2.push(tp-1);
                        }
                    }
                swap(stk,stk2);
                iter++;
            }
        return -1;
    }
};
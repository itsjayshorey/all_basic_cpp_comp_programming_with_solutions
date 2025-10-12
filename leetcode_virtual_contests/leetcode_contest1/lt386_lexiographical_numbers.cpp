#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void variableloop(int depth,int &maxdepth,vector<int> &values,int an,int n)
    {
        if(an > n)
        {
            return;
        }
        for(int i = 0 ; i<10 ; i++)
            {
                int curr = an*10 + i;
                if(curr!=0 && curr<=n)
                {
                    values.push_back(curr);
                }
                if(curr==0)continue;
                variableloop(depth+1,maxdepth,values,curr,n);
            }
    }
    vector<int> lexicalOrder(int n) {
        int op = n;
        int numl = 0;
        while(op>0)
            {
                numl++;
                op/=10;
            }
        vector<int> values;
        variableloop(0,numl,values,0,n);
        return values;
    }
};
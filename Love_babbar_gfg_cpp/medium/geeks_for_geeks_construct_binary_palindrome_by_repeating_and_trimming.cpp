#include <string>
#include <vector>
#include <set>
using namespace std;
class Solution {
  public:
    string binaryPalindrome(int n, int k) {
        // code here
        int virt = k;
        while(virt<n)
        {
            virt+=k;
        }
        vector<int> constraints(virt,0);
        for(int i = 0 ; i<virt; i++)
        {
            constraints[i] = i%k;
        }
        set<int> req_to_be_zero;
        for(int i = n; i<virt; i++)
        {
            req_to_be_zero.insert(constraints[i]);
        }
        set<int> req_to_be_one;
        req_to_be_one.insert(0);
        for(int i = 0; i<n/2; i++)
        {
            if(constraints[i]==0)
            {
                req_to_be_one.insert(constraints[n-i-1]);
            }
        }
        for(auto it = req_to_be_one.begin(); it!=req_to_be_one.end(); it++)
        {
            if(req_to_be_zero.find(*it)!=req_to_be_zero.end())
            {
                return "-1";
            }
        }
        for(int i = 0; i<n ; i++)
        {
            if(req_to_be_zero.find(i%k)!=req_to_be_zero.end())
            {
                constraints[i]=0;
            }
            else if(req_to_be_one.find(i%k)!=req_to_be_one.end())
            {
                constraints[i]=1;
            }
            else
            {
                constraints[i] = 0;
            }
        }
        string ans = "";
        for(int i = n-1; i>=0; i--)
        {
            ans.push_back(char(constraints[i]+'0'));
        }
        // return "ok";
        return ans;
    }
};

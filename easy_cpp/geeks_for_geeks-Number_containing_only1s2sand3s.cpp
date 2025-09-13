#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    bool isonly(int a)
    {
        int d;
        while(a!=0)
        {
            d=a%10;
            if(d!=1 && d!=2 && d!=3)
            {
                return false;
            }
            a=a/10;
        }
        return true;
    }
    vector<int> filterByDigits(vector<int>& arr) {
        // code here
        vector<int> ans;
        for(int i = 0;i<arr.size(); i++)
        {
            if(isonly(arr[i]))
            {
               ans.push_back(arr[i]); 
            }
        }
        if(ans.size()==0)
        {
            return {-1};
        }
        else
        {
            return ans;
        }
    }
};

// User function template for C++
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        long long product = 1;
        int countzero = 0;
        int zeroindex;
        for(int i = 0 ; i< arr.size(); i++)
        {
            if(arr[i]==0)
            {
                countzero++;
                zeroindex = i;
            }
            else
            {
                product = product*arr[i];
            }
        }
        if(countzero>1)
        {
            vector<int> ans(arr.size(),0);
            return ans;
        }
        else if(countzero == 1)
        {
            vector<int> ans(arr.size(),0);
            ans[zeroindex] = int(product);
            return ans;
        }
        vector<int> ans;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            ans.push_back(product/arr[i]);
        }
        return ans;
    }
};

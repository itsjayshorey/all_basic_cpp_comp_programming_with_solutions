#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    vector<int> get_next_step(vector<int> arr, int sz)
    {
        vector<int> ans;
        for(int i = 0; i<sz-1;i++)
        {
            ans.push_back((arr[i]+arr[i+1])%1000000007);
        }
        return ans;
    }
    vector<int> getTriangle(vector<int>& arr) {
        // code
        int sz = arr.size();
        vector<int> temp = arr;
        vector<int> temp2 = arr;
        for(int i = sz; i>1 ; i-- )
        {
            temp = get_next_step(temp2,i);
            temp2 = temp;
            temp.insert(temp.end(),arr.begin(),arr.end());
            arr = temp;
            temp = temp2;
        }
        return arr;
    }
};

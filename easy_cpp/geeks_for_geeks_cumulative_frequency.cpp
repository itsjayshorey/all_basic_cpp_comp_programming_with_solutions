#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Solution {
  public:
    vector<int> countFreq(vector<int>& arr) {
        // Complete the function
        unordered_map<int,int> mpi;
        set<int> col;
        vector<int> ans;
        for(int i = 0;i<arr.size();i++)
        {
            mpi[arr[i]]++;
            col.insert(arr[i]);
        }
        int sum = 0;
        for(int num : col)
        {
            sum = sum + mpi[num];
            ans.push_back(sum);
        }
        return ans;
    }
};
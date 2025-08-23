#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        unordered_map<int,int> col;
        int sz = arr.size();
        int threshold = sz/k;
        set<int> final_col;
        for(int i = 0; i<sz ;i++ )
        {
            col[arr[i]]++;
            if(col[arr[i]]>threshold)
            {
                final_col.insert(arr[i]);
            }
        }
        return final_col.size();
    }
};
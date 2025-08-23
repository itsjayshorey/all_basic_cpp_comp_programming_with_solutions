#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> col;
        int repeating;
        int missing;
        for(int i = 0;i<arr.size();i++)
        {
            col[arr[i]]++;
            if(col[arr[i]]>1)
            {
                repeating = arr[i];
            }
        }
        for(int i = 1 ;i<=arr.size();i++)
        {
            if(col[i]==0)
            {
                missing = i;
            }
        }
        return {repeating, missing};
    }
};
#include<iostream>
#include<vector>
#include<map>
using namespace std;
    
class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        map<int,int> col;
        for(int i = 0 ; i<a.size() ; i++)
        {
            col[a[i]]++;
        }
        for(int i = 0; i<b.size();i++)
        {
            if(col[b[i]]<=0)
            {
                return false;
            }
            col[b[i]]--;
        }
        return true;
    }
};
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;
class Solution {
  public:
    bool isIdentical(vector<int> &a, vector<int> &b) {
        // Your code goes here.
        int a_sz = a.size();
        int b_sz = b.size();
        if(a_sz != b_sz)
        {
            return false;
        }
        unordered_map<int,int> collection;
        for(int i = 0 ; i<a_sz ; i++)
        {
            collection[a[i]]++;
        }
        for(int i = 0 ; i<b_sz ; i++)
        {
            if(collection[b[i]]>0)
            {
                collection[b[i]]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
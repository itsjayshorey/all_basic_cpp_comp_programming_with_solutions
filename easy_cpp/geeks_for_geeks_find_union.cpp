#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        int k;
        vector<int> ans;
        int p1=0;
        int p2=0;
        int curr;
        while(p1<a.size() && p2<b.size())
        {
            if(a[p1]<b[p2])
            {
                ans.push_back(a[p1]);
                curr = a[p1];
                p1++;
            }
            else if(a[p1]==b[p2])
            {
                ans.push_back(a[p1]);
                p1++;
                p2++;
            }
            else//(a[p1]>b[p2])
            {
                ans.push_back(b[p2]);
                p2++;
            }

        }
        while(p1<a.size())
        {
            ans.push_back(a[p1++]);
        }
        while(p2<b.size())
        {
            ans.push_back(b[p2++]);
        }
        return ans;
        // return vector with correct order of elements
    }
};
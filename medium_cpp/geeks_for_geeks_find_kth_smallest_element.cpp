// User function template for C++
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int maxi = INT_MIN;
        int sz=0;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            maxi = max(maxi,arr[i]);
        }
        vector<int> vc(maxi+1,0);
        for(int i = 0 ; i<arr.size() ; i++)
        {
            vc[arr[i]]++;
        }
        for(int i = 0; i<maxi+1; i++)
        {
            if(vc[i]>0)
            {
                k-=vc[i];
            }
            if(k<=0)
            {
                return i;
            }
        }
        return -1;
    }
};//kth smallest element
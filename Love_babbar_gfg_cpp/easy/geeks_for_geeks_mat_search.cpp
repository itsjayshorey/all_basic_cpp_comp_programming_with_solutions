// User function template for C++
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int binarySearch(vector<int> &arr, int x ,int l, int r)
    {
        if(r<l)
        {
            return -1;
        }
        int mid = l + (r - l) / 2;
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            return binarySearch(arr,x,l,mid-1);
        }
        else
        {
            return binarySearch(arr,x,mid+1,r);
        }
    }
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        for(int i = 0 ;i< mat.size();i++)
        {
            int c = binarySearch(mat[i],x,0,mat[i].size()-1);
            if(c >= 0)
            {
                return true;
            }
        }
        return false;
    }
};
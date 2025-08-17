#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    int bin_search(vector<int> &arr, int k, int a, int b)
    {
        int mid;
        while(a<=b)
        {
            mid = (a+b)/2;
            if(arr[mid]==k)
            {
                return mid;
            }
            else if(arr[mid]>k)
            {
                return bin_search(arr,k,a,mid-1);
            }
            else
            {
                return bin_search(arr,k,mid+1,b);
            }
        }
        return -1;
    }
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int ans = bin_search(arr,k,0,arr.size());
        if(ans==0)
        {
            return ans;
        }
        if(ans==-1)
        {
            return -1;
        }

        while(arr[ans-1]==k)
        {
            ans--;
        }
        return ans;

    }
};
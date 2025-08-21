#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    void merge(vector<int>& arr, int l, int mid,int r)
    {
        vector<int> ans;
        int k = l;
        int rp = mid+1;
        while(l<=mid && rp<=r)
        {
            if(arr[l]<=arr[rp])
            {
                ans.push_back(arr[l]);
                l++;
            }
            else
            {
                ans.push_back(arr[rp]);
                rp++;
            }
        }
        while(l<=mid)
        {
            ans.push_back(arr[l++]);
        }
        while(rp<=r)
        {
            ans.push_back(arr[rp++]);
        }
        for(int i = 0;i<=(r-k);i++)
        {
            arr[k+i] = ans[i];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(r<=l)
        {
            return;
        }
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};
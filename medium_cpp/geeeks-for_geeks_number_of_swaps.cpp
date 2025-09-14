#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    void merge(vector<int> &ar1, int left, int right, int &inversion)
    {
        int mid = (left+right)/2;
        vector<int> combined;
        int pt1 = left;
        int pt2 = mid+1;
        while((pt1<=mid)&&(pt2<=right))
        {
            if(ar1[pt1]<=ar1[pt2])
            {
                combined.push_back(ar1[pt1]);
                pt1++;
            }
            else
            {
                inversion+=mid-pt1+1;
                combined.push_back(ar1[pt2]);
                pt2++;
            }
        }
        while(pt1<=mid)
        {
            combined.push_back(ar1[pt1++]);
        }
        while(pt2<=right)
        {
            combined.push_back(ar1[pt2++]);
        }
        for(int i = 0 ; i <= right-left; i++)
        {
            ar1[left+i] = combined[i];
        }
        return;
    }
    void mergesort(vector<int> &ar1, int left, int right, int &inversion)
    {
        if((right-left)<=0)
        {
            return;
        }
        int mid = (left+right)/2;
        mergesort(ar1,left,mid,inversion);
        mergesort(ar1,mid+1,right,inversion);
        merge(ar1,left,right,inversion);
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        int inversions = 0;
        mergesort(arr,0,arr.size()-1,inversions);
        return inversions;
        
    }
};// inversion count medium
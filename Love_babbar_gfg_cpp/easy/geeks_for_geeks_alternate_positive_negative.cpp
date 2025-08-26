// User function template for C++
#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> left;
        vector<int> right;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            if(arr[i] >= 0)
            {
                left.push_back(arr[i]);
            }
            else
            {
                right.push_back(arr[i]);
            }
        }
        int pt_1 = 0;
        int pt_2 = 0;
        while(pt_1<left.size()  && pt_2<right.size())
        {
            arr[pt_1+pt_2] = left[pt_1];
            pt_1++;
            arr[pt_1+pt_2] = right[pt_2];
            pt_2++;
        }
        while(pt_1<left.size())
        {
            arr[pt_1+pt_2] = left[pt_1];
            pt_1++;
        }
        while(pt_2<right.size())
        {
            arr[pt_1+pt_2] = right[pt_2];
            pt_2++;
        }
    }
};
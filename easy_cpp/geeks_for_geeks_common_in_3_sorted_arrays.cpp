#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        vector<int> ans;
        int pt1 = 0;
        int pt2 = 0;
        int pt3 = 0;
        while((pt1<arr1.size()) && (pt2<arr2.size()) && (pt3<arr3.size()))
        {
            if(arr1[pt1]>arr2[pt2])
            {
                pt2++;
            }
            else if(arr1[pt1]<arr2[pt2])
            {
                pt1++;
            }
            else{
                while((pt3<arr3.size()) && (arr3[pt3]<arr1[pt1]))
                {
                    pt3++;
                }
                if(pt3<arr3.size())
                {
                    if(arr3[pt3] == arr1[pt1])
                    {
                        if (ans.empty() || ans.back() != arr1[pt1]) {
                            ans.push_back(arr1[pt1]);
                        }
                    }
                    pt1++;
                    pt2++;
                }
            }
        }
        return ans;
    }
};
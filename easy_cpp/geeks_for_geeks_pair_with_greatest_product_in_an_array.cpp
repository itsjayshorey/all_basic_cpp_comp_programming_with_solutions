#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
  public:
    // Function to find greatest number
    int findGreatest(vector<int>& arr) {
        // Your code goes here
        // brute force
        // sort(arr.begin(),arr.end());
        // int ans = -1;
        // for(int i = 0;i<arr.size();i++)
        // {
        //     for(int j = i+1;j<arr.size();j++)
        //     {
        //         for(int k = j+1;k<arr.size();k++)
        //         {
        //             if(arr[i]*arr[j]==arr[k])
        //             {
        //                 if(arr[k]>ans)
        //                 {
        //                     ans = arr[k];
        //                 }
        //             }
        //         }
        //     }
        // }
        // return ans;
        
        int test;
        
        
        unordered_map<int,int> set;
        for(int i=0;i<arr.size();i++)
        {
            set[arr[i]]++;
        }
        sort(arr.begin(),arr.end());
        for(int i = arr.size()-1;i>1;i--)
        {
            for(int j = 0; j <i && arr[j]<sqrt(arr[i]);j++)
            {
                if(arr[i]%arr[j] == 0)
                {
                    test = arr[i]/arr[j];
                    set[arr[i]]--;
                    if(set[test]>0)
                    {
                        return arr[i];
                    }
                    set[arr[i]]++;
                }
                
            }
        }
        return -1;
    }
};
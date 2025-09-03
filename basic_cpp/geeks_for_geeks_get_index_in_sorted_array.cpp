//Back-end complete function template in C++
#include <vector>
#include <iostream>
using namespace std;

class Solution {

  public:
    // Function to get the index of an element in a sorted array.
    int getIndexInSortedArray(vector<int>& arr, int k) {
        // Write Code Here
        int n1 = 0;
        for(int i = 0;i<k;i++)
        {
            if(arr[i]<=arr[k])
            {
                n1++;
            }
        }
        int n2 = 0;
        for(int i = k+1;i<arr.size();i++)
        {
            if(arr[i]<arr[k])
            {
                n2++;
            }
        }
        return (n1+n2);
    }
};
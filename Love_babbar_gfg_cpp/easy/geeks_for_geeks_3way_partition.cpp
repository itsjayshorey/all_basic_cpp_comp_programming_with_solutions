#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
        int lo = 0;
        int mid = 0;
        int high = arr.size()-1;
        int temp;
        while(mid<=high)
        {
            if(arr[mid]<a)
            {
                temp = arr[lo];
                arr[lo] = arr[mid];
                arr[mid] = temp;
                lo++;
                mid++;
            }
            else if(arr[mid]>=a && arr[mid]<=b)
            {
                mid++;
            }
            else
            {
                temp = arr[high];
                arr[high] = arr[mid];
                arr[mid] = temp;
                high--;
                // mid++;
            }
        }
    }
};
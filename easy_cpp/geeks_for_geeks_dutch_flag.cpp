#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int pt1 = 0;
        int mid = 0;
        int end = arr.size()-1;
        int temp;
        while(end>=mid)
        {
            if(arr[mid]==0)
            {
                // swap(arr[mid],arr[pt1]);
                temp = arr[mid];
                arr[mid] = arr[pt1];
                arr[pt1] = temp;
                mid++;
                pt1++;
            }
            else if(arr[mid]==2)
            {
                temp = arr[mid];
                arr[mid]= arr[end];
                arr[end] = temp;
                // swap(arr[end],arr[end]);
                end--;
            }
            else//(arr[mid]==1)
            {
                mid++;
            }
        }
    }
};
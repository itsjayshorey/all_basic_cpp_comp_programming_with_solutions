#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        int sz = arr.size();
        int temp = arr[k-1];
        arr[k-1] = arr[sz-k];
        arr[sz-k] = temp;
    }
};

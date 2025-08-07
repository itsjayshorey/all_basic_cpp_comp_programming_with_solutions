#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        // arr.pop_back();
        // arr.pop_back();
        arr.erase(arr.end()-2,arr.end());
        return arr;
    }
};
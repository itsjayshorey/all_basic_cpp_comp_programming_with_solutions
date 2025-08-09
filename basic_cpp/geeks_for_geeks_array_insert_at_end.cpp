#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void insertAtEnd(vector<int> &arr, int val) {
        // code here
        arr.insert(arr.end(),val);
    }
};

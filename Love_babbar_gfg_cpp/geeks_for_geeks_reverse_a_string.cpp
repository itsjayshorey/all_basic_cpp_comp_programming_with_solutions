// User function Template for C++
#include <algorithm>
#include <string>
using namespace std;
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        reverse(s.begin(),s.end());
        return s;
    }
};

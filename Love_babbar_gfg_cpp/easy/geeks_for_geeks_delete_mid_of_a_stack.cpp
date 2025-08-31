#include<iostream>
#include<stack>
using namespace std;
class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteM (stack<int>& s,int k)
    {
        if(k==0)
        {
            s.pop();
            return;
        }
        else
        {
            int curr = s.top();
            s.pop();
            k--;
            deleteM(s,k);
            s.push(curr);
        }
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int sz = s.size();
        int mid = sz/2;
        deleteM(s,(mid));
    }
};
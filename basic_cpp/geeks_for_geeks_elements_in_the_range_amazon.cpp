#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
        int k = B-A+1;
        int check[k] = {0};
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=B && arr[i]>=A)
            {
                check[(arr[i]-A)]=check[(arr[i]-A)]+1;
            }
        }
        for(int i = 0 ;i<(B-A+1);i++)
        {
            if(check[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};

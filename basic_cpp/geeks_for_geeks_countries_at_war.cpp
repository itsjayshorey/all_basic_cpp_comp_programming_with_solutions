#include <iostream>
#include <vector>
using namespace std;
// Function to determine which country is at war
class Solution {

  public:
    string countryAtWar(vector<int>& arr1, vector<int>& arr2) {
        // code
        int sz = arr1.size();
        int A = 0;
        int B = 0;
        for(int i = 0; i<sz; i++)
        {
            if(arr1[i]>arr2[i])
            {
                A = A + 1;
            }
            else if(arr1[i]<arr2[i])
            {
                B = B + 1;
            }
        }
        if(A>B)
        {
            return "A";
        }
        else if(A == B)
        {
            return "DRAW";
        }
        else
        {
            return "B";
        }
    }
};
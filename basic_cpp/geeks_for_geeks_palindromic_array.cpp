/*Complete the function below*/
# include <vector>
# include <iostream>
using namespace std;
class Solution {
  public:
    bool isPalindromenum(unsigned int a)
    {
        unsigned int b=a;
        unsigned int c=0;
        while(b>0)
        {
            c = c*10 + b%10;
            b = b/10;
        }
        if(c == a)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isPalinArray(vector<int> &arr) {
        // code here
        int s = arr.size();
        for(int i = 0; i<s; i++)
        {
            if(!isPalindromenum(arr[i]))
            {
                return false;
            }
        }
        return true;
    }
};
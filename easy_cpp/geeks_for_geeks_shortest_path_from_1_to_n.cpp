// User function Template for C++

class Solution {
  public:
    int minimumStep(int n) {
        // complete the function here
        int pt1 = 0;
        int ls = 0;
        int i = n;
        while(i>0)
        {
            if(i/3>0)
            {
                pt1+=i-int(i/3)*3;
                i=i/3;
                pt1++;
                // ls = i;
            }
            else
            {
                break;
            }
        }
        if(i==1)
            return (pt1);
        else if(i==2)
            return (pt1 + 1);
        else
            return (pt1);
    }
};
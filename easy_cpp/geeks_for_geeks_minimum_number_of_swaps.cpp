#include <string>
#include <vector>
using namespace std;
class Solution {
  public:
    int minSwaps(string& s1, string& s2) {
        // code here
        int ns1=0;
        int ns0=0;
        for(int i = 0;i<s1.size();i++)
        {
            if(s1[i]==s2[i])
            {
                continue;
            }
            else
            {
                if(s1[i]=='1' && s2[i]=='0')
                {
                    ns1++;
                    // s1[i]='0';
                }
                else if(s1[i]=='0' && s2[i]=='1')
                {
                    // s1[i]='1';
                    ns0++;
                }
            }
        }
        if((ns1+ns0)%2==1)
        {
            return -1;
        }
        else
        {
            return ns1/2 + ns0/2 + (ns1%2)*2 ;
        }
    }
};
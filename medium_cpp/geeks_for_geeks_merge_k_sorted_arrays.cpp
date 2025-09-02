#include <vector>
using namespace std;

class Solution {
  public:
    // Function to merge k sorted arrays.
    static vector<int> merge(vector<int> &a, vector<int> &b)
    {
        int pt1 =0;
        int pt2 =0;
        vector<int> ans;
        while(pt1<a.size() && pt2 <b.size())
        {
            if(a[pt1]>b[pt2])
            {
                ans.push_back(b[pt2]);
                pt2++;
            }
            else
            {
                ans.push_back(a[pt1]);
                pt1++;
            }
        }
        while(pt1<a.size())
        {
            ans.push_back(a[pt1]);
            pt1++;
        }
        while(pt2<b.size())
        {
            ans.push_back(b[pt2]);
            pt2++;
        }
        return ans;
    }
    vector<int> mergeKArrays(vector<vector<int>> arr, int K) {
        // code here
        vector<int> current;
        vector<vector<int>> nwar;
        while(K!=1)
        {
            if(K%2 == 0)
            {
                for(int i = 0; i <K-1 ; i+=2)
                { 
                    current = merge(arr[i],arr[i+1]);
                    nwar.push_back(current);
                    current.clear();
                }
                K = K / 2;
                arr = nwar;
                nwar.clear();
            }
            else
            {
                for(int i = 0; i <K-2 ; i+=2)
                { 
                    current = merge(arr[i],arr[i+1]);
                    nwar.push_back(current);
                    current.clear();
                }
                nwar.push_back(arr[K-1]);
                arr = nwar;
                nwar.clear();
                K = (K / 2 )+1;                
            }
            
        }
        return arr[0];
    }
};
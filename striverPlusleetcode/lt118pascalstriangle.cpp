#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> temp2;
        if(numRows == 0)
        {
            return ans;
        }
        if(numRows >= 1)
        {
            ans.push_back({1});
            if(numRows==1)
               return ans;
        }
        if(numRows >= 2)
        {
            ans.push_back({1,1});
            cout<<2<<endl;
        }
        cout<<numRows<<endl;
        for(int i = 2;i <numRows ; i++)
        {
            temp = ans[i-1];
            vector<int> temp2;
            temp2.push_back(1);
            for(int j = 0; j<temp.size()-1; j++)
            {
                temp2.push_back(temp[j]+temp[j+1]);
            }
            temp2.push_back(1);
            ans.push_back(temp2);
            temp2.clear();
        }
        return ans;
    }
};
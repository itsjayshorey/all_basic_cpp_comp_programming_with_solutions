#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
  public:
    string MaxNumber(vector<int>& arr) {
        // code here.
        // bruteforce
        // sort(arr.begin(),arr.end());
        // string ans;
        // for(int i = arr.size()-1; i>=0; i--)
        // {
        //     ans = ans + char('0' + arr[i]);
        // }
        // return ans;
        map<int,int> col_of_numbers;
        // vector<int> col_of_numbers(10,0);//use frequency array
        for(int i = 0 ; i<arr.size(); i++)
        {
            col_of_numbers[arr[i]]++;
        }
        string ans = "";
        for(int i = 9 ; i>=0 ;i--)
        {
            if(col_of_numbers[i]>0)
            {
                ans = ans + string(col_of_numbers[i],char('0'+i));
                col_of_numbers[i]--;
            }
        }
        return ans;
    }
};
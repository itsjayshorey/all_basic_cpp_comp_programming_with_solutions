#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        // Your code here
        long long max_Book = 0;
        long long temp;
        for(int i = 0;i<n ;i++)
        {
            temp = 0;
            while((i<n)&&(arr[i]<=k))
            {
                temp += arr[i];
                i++;
            }
            if(temp > max_Book)
            {
                max_Book = temp;
            }
        }
        return max_Book;
    }
};
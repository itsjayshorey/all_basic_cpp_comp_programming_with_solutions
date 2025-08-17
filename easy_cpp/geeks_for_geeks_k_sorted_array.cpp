// User function template for C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int binary_search(int arr[],int a,int b,int n)
    {
        int mid;
        while(b>=a)
        {
            mid= (a+b)/2;
            if(arr[mid]==n)
            {
                return mid;
            }
            else if(arr[mid]>n)
            {
                return(binary_search(arr,a,mid-1,n));
            }
            else
            {
                return(binary_search(arr,mid+1,b,n));
            }
        }
        return -1;
    }
    string isKSortedArray(int arr[], int n, int k) {
        // code here.
        int* ar2 = new int[n];
        for(int i = 0;i<n;i++)
        {
            ar2[i] = arr[i];
        }
        sort(ar2,ar2+n);
        for(int i=0;i<n;i++)
        {
            int j = binary_search(ar2,0,n-1,arr[i]);
            if(abs(i-j)>k)
            {
                return "No";
            }
        }
        return "Yes";
    }
};
// class Solution {
//   public:
//     void merge_sort(int *arr, int l,int r)
//     {
//         if(r>l)
//         {
//             int m = (l+r)/2;
//             merge_sort(arr,l,m);
//             merge_sort(arr,m+1,r);
//             merge(arr,l,m,r);
//         }
//     }
//     void merge(int *arr, int l,int m, int r)
//     {
//         int sz1 = m-l+1;
//         int sz2 = r-m;
//         int ar1[sz1],ar2[sz2];
//         for(int i =0;i<sz1;i++)
//         {
//             ar1[i]=arr[l+i];
//         }
//         for(int i = 0;i<sz2;i++)
//         {
//             ar2[i] = arr[m+i+1];
//         }
//         int i = 0;
//         int j = 0;
//         while(i<sz1 && j<sz2)
//         {
//             if(ar1[i]<ar2[j])
//             {
//                 arr[l+i+j]=ar1[i];
//                 i++;
//             }
//             else
//             {
//                 arr[l+i+j]=ar2[j];
//                 j++;
//             }
//         }
//         while(i<sz1)
//         {
//             arr[l+i+j] = ar1[i++];
//         }
//         while(j<sz2)
//         {
//             arr[l+i+j] = ar2[j++];
//         }
//     }
//     long long int minSum(int arr[], int n) {
//         // Your code goes here
//         merge_sort(arr,0,n-1);
//         long long ans1 = 0;
//         long long ans2 = 0;
//         for(int i = 0;i<n;i=i+2)
//         {
//             ans1 = ans1*10 + arr[i];
//             if (i + 1 < n) {
//                 ans2 = ans2 * 10 + arr[i+1];
                
//             }
//         }
//         return (ans2);
//     }
// };
















#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge_sort(int *arr, int l, int r) {
        if (r > l) {
            int m = (l + r) / 2;
            merge_sort(arr, l, m);
            merge_sort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }

    void merge(int *arr, int l, int m, int r) {
        int sz1 = m - l + 1;
        int sz2 = r - m;
        vector<int> ar1(sz1), ar2(sz2);

        for (int i = 0; i < sz1; i++)
            ar1[i] = arr[l + i];
        for (int i = 0; i < sz2; i++)
            ar2[i] = arr[m + 1 + i];

        int i = 0, j = 0, k = l;
        while (i < sz1 && j < sz2) {
            if (ar1[i] < ar2[j])
                arr[k++] = ar1[i++];
            else
                arr[k++] = ar2[j++];
        }
        while (i < sz1)
            arr[k++] = ar1[i++];
        while (j < sz2)
            arr[k++] = ar2[j++];
    }

    long long int minSum(int arr[], int n) {
        merge_sort(arr, 0, n - 1);

        long long ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i += 2) {
            ans1 = ans1 * 10 + arr[i];
            if (i + 1 < n)
                ans2 = ans2 * 10 + arr[i + 1];
        }
        return ans1 + ans2;
    }
};

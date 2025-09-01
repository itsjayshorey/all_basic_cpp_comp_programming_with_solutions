// class Solution {
//   public:
//     int modandmin(map<int,int>& arr)
//     {
//         int freq = 1;
//         // int min = 10000007;
//         int max = 0;
//         int ans;
//         for(auto comp: arr)
//         {
//             if(comp.second > max)
//             {
//                 max = comp.second;
//                 ans = comp.first;
//             }
//         }
//         return ans;
//     }
//     int sumOfModes(vector<int>& arr, int k) {
//         // code here
//         map<int,int> setcol;
//         int pt1 = 0;
//         int pt2 = 0;
//         int ans=0;
//         while (pt1<=arr.size()-k)
//         {
//             while((pt2-pt1)<k)
//             {
//                 setcol[arr[pt2]]++;
//                 pt2++;
//             }
//             ans += modandmin(setcol);
//             setcol[arr[pt1]]--;
//             pt1++;
//         }
//         return ans;
//     }
// };



// chatgpt code
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
using namespace std;

class Solution {
  public:
    int sumOfModes(vector<int>& arr, int k) {
        unordered_map<int,int> freq;              // frequency of each element
        map<int, set<int>> bucket;                // freq -> elements with this freq
        int n = arr.size();
        int ans = 0, maxFreq = 0;

        auto add = [&](int x) {
            int old = freq[x]++;
            if (old > 0) {
                bucket[old].erase(x);
                if (bucket[old].empty()) bucket.erase(old);
            }
            bucket[old+1].insert(x);
            maxFreq = max(maxFreq, old+1);
        };

        auto remove = [&](int x) {
            int old = freq[x]--;
            bucket[old].erase(x);
            if (bucket[old].empty()) bucket.erase(old);

            if (freq[x] > 0) {
                bucket[old-1].insert(x);
            }
            if (bucket.find(maxFreq) == bucket.end()) {
                maxFreq--; // decrease maxFreq if needed
            }
        };

        // build first window
        for (int i = 0; i < k; i++) {
            add(arr[i]);
        }
        ans += *bucket[maxFreq].begin(); // smallest element with max frequency

        // slide the window
        for (int i = k; i < n; i++) {
            add(arr[i]);
            remove(arr[i-k]);
            ans += *bucket[maxFreq].begin();
        }

        return ans;
    }
};

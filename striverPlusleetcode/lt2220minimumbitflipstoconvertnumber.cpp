#include <iostream>
using namespace std;
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;
        int answer = 0;
        while(ans>0)
        {
            answer+=ans & 1;
            ans = ans>>1;
        }
        return answer;
    }
};
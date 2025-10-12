#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int remaining = 0;
        for(int bytes:data)
            {
                if(remaining ==0)
                {
                    if(bytes>>7==0b0)
                    {
                        remaining = 0;
                    }
                    else if(bytes>>5==0b110)
                    {
                        remaining = 1;
                    }
                    else if(bytes>>4==0b1110)
                    {
                        remaining = 2;
                    }
                    else if(bytes>>3==0b11110)
                    {
                        remaining = 3;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    if(bytes>>6!=0b10)
                    {
                        return false;
                    }
                    remaining--;
                }
            }
        return remaining==0;
    }
};
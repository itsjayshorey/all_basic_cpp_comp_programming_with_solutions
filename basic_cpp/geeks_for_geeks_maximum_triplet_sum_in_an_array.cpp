#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to find the maximum triplet sum in the array.
    int maxTripletSum(vector<int> &arr) {
        // Complete the function
        int sz = arr.size();
        int m_1 = -100000;
        int m_2 = -100000;
        int m_3 = -100000;

        for(int i = 0;i<sz;i++)
        {
            if(m_1<arr[i])
            {
                m_1 = arr[i];
                if(m_2<m_1)
                {
                    int temp = m_2;
                    m_2 = m_1;
                    m_1 = temp;
                }
                if(m_3<m_2)
                {
                    int temp = m_3;
                    m_3 = m_2;
                    m_2 = temp;
                }
            }
        }
        return (m_1+m_2+m_3);
    }
};
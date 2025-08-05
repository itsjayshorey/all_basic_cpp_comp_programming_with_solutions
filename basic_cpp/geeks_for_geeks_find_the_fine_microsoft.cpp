#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        long long fine_a = 0;
        int odev = date%2;
        for(int i=0;i<car.size();i++)
        {
            if(car[i]%2!=odev)
            {
                fine_a = fine_a + fine[i];
            }
        }
        return fine_a;
    }
};
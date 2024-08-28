#include <iostream>
using namespace std;


// User function Template for C++

class Solution {
  public:
    // Complete this function
    int countDigits(int n) {
        if (n == 0)
            return 0;
        return 1 + countDigits(n / 10);
    }
};

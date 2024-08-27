#include <iostream>
using namespace std;


//User function Template for C++

class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        if (n < 10)
            return n;
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return digitalRoot(sum);
    }
};

#include <bits/stdc++.h>
#include <fstream>
using namespace std;


//User function Template for C++
// You need to complete this function


class Solution
{
    public:
    //Function to find the nth fibonacci number using bottom-up approach.
    long long findNthFibonacci(int number)
    {
        if (number == 0) return 0;
        if (number == 1) return 1;
        
        long long prev1 = 0, prev2 = 1, current;
        
        for (int i = 2; i <= number; i++) {
            current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        
        return current;
    }
};

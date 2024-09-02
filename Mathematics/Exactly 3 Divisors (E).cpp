#include <bits/stdc++.h>
using namespace std;


//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        int count = 0;
        
        for (int i = 2; i * i <= N; ++i) {
            bool isPrime = true;
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime && i * i <= N) {
                count++;
            }
        }
        
        return count;
    }
};

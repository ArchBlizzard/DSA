#include <bits/stdc++.h>
using namespace std;


//User function Template for C++
class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        long long M = 1e9 + 7;
            a %= M;
            b %= M;
            return (a * b) % M;
    }
};

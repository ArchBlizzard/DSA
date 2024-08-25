#include <bits/stdc++.h>
using namespace std;



class Solution{
    public:
    //You need to complete this fucntion
    const long long MOD = 1e9 + 7;
    long long power(int N,int R)
    {
        long long result = 1;
        long long base = N;

        while (R > 0) {
            if (R % 2 == 1) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
            R /= 2;
        }

        return result;
        
    }

};

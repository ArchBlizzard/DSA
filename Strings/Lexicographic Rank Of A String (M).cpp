#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to find lexicographic rank of a string.
    int findRank(string S) {
        int n = S.size();
        long long mod = 1000000007;
        long long fact[n + 1];
        fact[0] = 1;

        for (int i = 1; i <= n; i++) {
            fact[i] = (fact[i - 1] * i) % mod;
        }

        vector<int> count(256, 0);
        for (char c : S) {
            if (++count[c] > 1) {
                return 0;
            }
        }

        long long rank = 1;
        for (int i = 0; i < n; i++) {
            long long less = 0;
            for (int j = 0; j < S[i]; j++) {
                less += count[j];
            }
            rank = (rank + (less * fact[n - i - 1]) % mod) % mod;
            count[S[i]]--;
        }

        return rank;
    }
};

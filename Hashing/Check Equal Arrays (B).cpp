#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {

  public:



    // Function to check if two arrays are equal or not.

    bool check(vector<ll> A, vector<ll> B, int N) {

        if (N != A.size() || N != B.size()) {

            return false;

        }

        

        unordered_map<long long, int> countA;

        for (int i = 0; i < N; ++i) {

            countA[A[i]]++;

        }

        

        unordered_map<long long, int> countB;

        for (int i = 0; i < N; ++i) {

            countB[B[i]]++;

        }

        

        return countA == countB;

    }

};

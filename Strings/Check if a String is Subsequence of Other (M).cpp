#include <bits/stdc++.h>
using namespace std;

//User function Template for C++

class Solution
{
    public:
    //Function to check if a string is subsequence of other string.
    bool isSubSequence(string A, string B)
    {
        int m = A.length();
        int n = B.length();
        
        int j = 0;
        
        for (int i = 0; i < n && j < m; i++) {
            if (A[j] == B[i]) {
                j++;
            }
        }
        
        return (j == m);
    }
};

#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int n = S.size();
    reverse(S.begin(), S.end());
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && S[j] != '.') j++;
        reverse(S.begin() + i, S.begin() + j);
        i = j + 1;
    }
    return S;
    } 
};

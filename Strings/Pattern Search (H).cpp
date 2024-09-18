#include<bits/stdc++.h> 
using namespace std; 


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	int n = txt.size();
        int m = pat.size();

        for (int i = 0; i <= n - m; i++) {
            int j;
            for (j = 0; j < m; j++) {
                if (txt[i + j] != pat[j]) {
                    break;
                }
            }
            if (j == m) {
                return true;
            }
        }
        return false;
    } 
};

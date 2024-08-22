#include <bits/stdc++.h>
using namespace std;


// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        int n = mat.size();
        stack<int> stk;
        
        for (int i = 0; i < n; i++) {
            stk.push(i);
        }
        
        while (stk.size() > 1) {
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            
            if (mat[a][b] == 1) {
                stk.push(b);
            } else {
                stk.push(a);
            }
        }
        
        if (stk.empty()) return -1;
        
        int candidate = stk.top();
        
        for (int i = 0; i < n; i++) {
            if (i != candidate) {
                if (mat[candidate][i] == 1 || mat[i][candidate] == 0) {
                    return -1;
                }
            }
        }
        
        return candidate;
    }
};

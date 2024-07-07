#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        stack<char> st;
        for (char c : s) {
            if (st.empty() || st.top() != c) {
                st.push(c);
            }
        }
        
        string result = "";
        while (!st.empty()) {
            result = st.top() + result;
            st.pop();
        }
        
        return result;
    }
};

#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> st;
        
        for (int i = 0; i < S.size(); i++) {
            char ch = S[i];
            
            if (isdigit(ch)) {
                st.push(ch - '0');
            }
            else {
                int val2 = st.top();
                st.pop();
                int val1 = st.top();
                st.pop();
                
                switch (ch) {
                    case '+': st.push(val1 + val2); break;
                    case '-': st.push(val1 - val2); break;
                    case '*': st.push(val1 * val2); break;
                    case '/': st.push(val1 / val2); break;
                }
            }
        }
        
        return st.top();
    }
};

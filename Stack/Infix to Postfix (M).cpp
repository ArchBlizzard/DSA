#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int precedence(char c) {
        if (c == '^') return 3;
        if (c == '*' || c == '/') return 2;
        if (c == '+' || c == '-') return 1;
        return -1;
    }
    string infixToPostfix(string s) {
        stack<char> st;
        string result;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            
            if (isalnum(c)) {
                result += c;
            } 
            else if (c == '(') {
                st.push(c);
            } 
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            } 
            else {
                while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                    result += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        return result;
    }
};

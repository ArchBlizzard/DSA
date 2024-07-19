#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        stack<char> s;
        for(char c : str) {
            if(!s.empty() && s.top() == c) {
                s.pop();
            } else {
                s.push(c);
            }
        }
        
        string result = "";
        while(!s.empty()) {
            result = s.top() + result;
            s.pop();
        }
        
        return result;// Your code here
    }
};

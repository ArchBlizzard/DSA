#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(vector<long long> &hist) {
        int n = hist.size();
        stack<int> st;
        long long maxArea = 0;
        int i = 0;
        
        while (i < n) {
            if (st.empty() || hist[st.top()] <= hist[i]) {
                st.push(i++);
            } else {
                int top = st.top();
                st.pop();
                long long area = hist[top] * (st.empty() ? i : i - st.top() - 1);
                maxArea = max(maxArea, area);
            }
        }
        
        while (!st.empty()) {
            int top = st.top();
            st.pop();
            long long area = hist[top] * (st.empty() ? i : i - st.top() - 1);
            maxArea = max(maxArea, area);
        }
        
        return maxArea;
    }
};

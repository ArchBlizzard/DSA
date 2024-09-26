#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        priority_queue<long long, vector<long long>, greater<long long>> minHeap;
        
        for (long long length : arr) {
            minHeap.push(length);
        }
        
        long long totalCost = 0;
        
        while (minHeap.size() > 1) {
            long long first = minHeap.top();
            minHeap.pop();
            long long second = minHeap.top();
            minHeap.pop();
            
            long long cost = first + second;
            totalCost += cost;
            
            minHeap.push(cost);
        }
        
        return totalCost;
    }
};

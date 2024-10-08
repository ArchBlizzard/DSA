#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfsResult;
        vector<bool> visited(V, false);
        queue<int> q;
        
        q.push(0);
        visited[0] = true;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            
            bfsResult.push_back(node);
            
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        
        return bfsResult;
    }
};

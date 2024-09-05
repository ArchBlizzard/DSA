#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dist(n, vector<int>(m, -1));
        queue<pair<int, int>> q;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    dist[i][j] = 0;
                    q.push(make_pair(i, j));
                }
            }
        }
        
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        
        while (!q.empty()) {
            pair<int, int> cell = q.front();
            q.pop();
            
            for (pair<int, int> dir : directions) {
                int newX = cell.first + dir.first;
                int newY = cell.second + dir.second;
                
                if (newX >= 0 && newY >= 0 && newX < n && newY < m && dist[newX][newY] == -1) {
                    dist[newX][newY] = dist[cell.first][cell.second] + 1;
                    q.push(make_pair(newX, newY));
                }
            }
        }
        
        return dist;
    }
};

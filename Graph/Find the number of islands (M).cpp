#include <bits/stdc++.h>
using namespace std;


class Solution {

  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size(), count = 0;
        vector<int> dx = {-1, -1, -1, 0, 0, 1, 1, 1};
        vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};
        
        auto bfs = [&](int x, int y) {
            queue<pair<int, int>> q;
            q.push({x, y});
            grid[x][y] = '0';
            
            while (!q.empty()) {
                pair<int, int> current = q.front();
                q.pop();
                int cx = current.first, cy = current.second;
                
                for (int i = 0; i < 8; i++) {
                    int nx = cx + dx[i], ny = cy + dy[i];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == '1') {
                        grid[nx][ny] = '0';
                        q.push({nx, ny});
                    }
                }
            }
        };
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    bfs(i, j);
                }
            }
        }
        
        return count;
    }
};

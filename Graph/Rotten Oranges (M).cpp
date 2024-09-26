#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        queue<pair<int, int>> q;
        int fresh = 0, time = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        vector<int> dir = {-1, 0, 1, 0, -1};

        while (!q.empty() && fresh) {
            int sz = q.size();
            while (sz--) {
                pair<int, int> cell = q.front();
                int x = cell.first;
                int y = cell.second;
                q.pop();
                
                for (int i = 0; i < 4; i++) {
                    int nx = x + dir[i], ny = y + dir[i + 1];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 1) {
                        grid[nx][ny] = 2;
                        q.push({nx, ny});
                        fresh--;
                    }
                }
            }
            time++;
        }

        return fresh == 0 ? time : -1;
    }
};

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        vector<int> dx = {-1, 1, 0, 0};
        vector<int> dy = {0, 0, -1, 1};
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                    break;
                }
            }
        }

        while (!q.empty()) {
            pair<int, int> current = q.front();
            q.pop();
            int cx = current.first, cy = current.second;

            if (grid[cx][cy] == 2) {
                return true;
            }

            grid[cx][cy] = 0;

            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i], ny = cy + dy[i];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n && (grid[nx][ny] == 2 || grid[nx][ny] == 3)) {
                    q.push({nx, ny});
                }
            }
        }
        return false;
    }
};

#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    vector<vector<bool>> visited(N, vector<bool>(N, false));
        queue<pair<int, int>> q;
        vector<int> dx = {2, 2, -2, -2, 1, 1, -1, -1};
        vector<int> dy = {1, -1, 1, -1, 2, -2, 2, -2};

        q.push({KnightPos[0] - 1, KnightPos[1] - 1});
        visited[KnightPos[0] - 1][KnightPos[1] - 1] = true;

        int steps = 0;

        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                pair<int, int> current = q.front();
                q.pop();
                int x = current.first;
                int y = current.second;
                
                if (x == TargetPos[0] - 1 && y == TargetPos[1] - 1) {
                    return steps;
                }

                for (int i = 0; i < 8; i++) {
                    int nx = x + dx[i], ny = y + dy[i];
                    if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
            steps++;
        }

        return -1;
	}
};

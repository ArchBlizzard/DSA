#include<bits/stdc++.h>
using namespace std;


class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    vector<int> level(V, -1);
        queue<int> q;
        q.push(0);
        level[0] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int neighbor : adj[node]) {
                if (level[neighbor] == -1) {
                    level[neighbor] = level[node] + 1;
                    q.push(neighbor);
                }
            }
        }
        return level[X];
	}
};

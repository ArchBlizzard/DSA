#include <bits/stdc++.h> 
using namespace std;
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        r = matrix.size();
        c = matrix[0].size();
        vector<int> ans;

        if (r == 0)
            return ans;

        vector<vector<bool> > seen(r, vector<bool>(c, false));
        int dr[] = { 0, 1, 0, -1 };
        int dc[] = { 1, 0, -1, 0 };

        int x = 0, y = 0, di = 0;

    
        for (int i = 0; i < r * c; i++) {
            ans.push_back(matrix[x][y]);
            seen[x][y] = true;
            int newX = x + dr[di];
            int newY = y + dc[di];

        if (0 <= newX && newX < r && 0 <= newY && newY < c
            && !seen[newX][newY]) {
            x = newX;
            y = newY;
        }
        else {
            di = (di + 1) % 4;
            x += dr[di];
            y += dc[di];
        }
    }
        return ans; 
    }
};

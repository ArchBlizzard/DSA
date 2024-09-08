#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        vector<pair<int, int>> meetings(n);
        for (int i = 0; i < n; i++) {
            meetings[i] = {end[i], start[i]};
        }
        
        sort(meetings.begin(), meetings.end());

        int count = 1;
        int lastEnd = meetings[0].first;

        for (int i = 1; i < n; i++) {
            if (meetings[i].second > lastEnd) {
                count++;
                lastEnd = meetings[i].first;
            }
        }
        
        return count;
    }
};

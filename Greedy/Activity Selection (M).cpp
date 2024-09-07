#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int, int>> activities(n);
        for (int i = 0; i < n; i++) {
            activities[i] = {end[i], start[i]};
        }
        
        sort(activities.begin(), activities.end());
        
        int count = 1; 
        int lastEnd = activities[0].first; 
        
        for (int i = 1; i < n; i++) {
            if (activities[i].second > lastEnd) {
                count++;
                lastEnd = activities[i].first;
            }
        }
        
        return count;
    }
};

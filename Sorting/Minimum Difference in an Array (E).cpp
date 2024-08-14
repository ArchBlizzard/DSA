#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        sort(arr, arr + n);
        int minDiff = INT_MAX;
        
        for (int i = 1; i < n; i++) {
            int diff = arr[i] - arr[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
        
        return minDiff;
    }
};

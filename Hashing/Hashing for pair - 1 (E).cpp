#include <bits/stdc++.h>
using namespace std;


// User function Template for C++

// You need to complete this function.
// Function to check if there is a pair with the given sum in the array.
int sumExists(int arr[], int N, int sum) {
    unordered_set<int> seen;
    
    for(int i = 0; i < N; i++) {
        int complement = sum - arr[i];
        if(seen.find(complement) != seen.end()) {
            return 1;
        }
        seen.insert(arr[i]);
    }
    
    return 0;
}

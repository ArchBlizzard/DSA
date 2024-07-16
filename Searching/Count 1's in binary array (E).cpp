#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        int low = 0;
        int high = N - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == 1) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return low;
        
    }
};

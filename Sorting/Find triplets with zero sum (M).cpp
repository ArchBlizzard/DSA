#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr, arr + n);
        for (int i = 0; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                if (sum == 0) {
                    return true;
                } else if (sum < 0) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
        return false;
    }
};

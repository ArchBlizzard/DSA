#include <bits/stdc++.h>

using namespace std;

class Solution {

    // Function to find the trapped water between the blocks.
  public:
    long long trappingWater(vector<int> &arr) {
        int i = 0, j = arr.size() - 1;
        long long area = 0;
        int lm = 0, rm = 0;

        while (i <= j) {
            if (arr[i] <= arr[j]) {
                if (arr[i] >= lm) {
                    lm = arr[i];
                } else {
                    area += lm - arr[i];
                }
                i++;
            } else {
                if (arr[j] >= rm) {
                    rm = arr[j];
                } else {
                    area += rm - arr[j];
                }
                j--;
            }
        }
        return area;
        }
};

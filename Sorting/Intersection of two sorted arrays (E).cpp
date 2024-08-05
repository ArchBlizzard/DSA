#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(vector<int> &arr1, vector<int> &arr2) {
        vector<int> intersection;
        int i = 0, j = 0;

        while (i < arr1.size() && j < arr2.size()) {
            while (i > 0 && i < arr1.size() && arr1[i] == arr1[i - 1]) {
                i++;
            }
            while (j > 0 && j < arr2.size() && arr2[j] == arr2[j - 1]) {
                j++;
            }

            if (i >= arr1.size() || j >= arr2.size()) {
                break;
            }

            if (arr1[i] < arr2[j]) {
                i++;
            } else if (arr1[i] > arr2[j]) {
                j++;
            } else {
                intersection.push_back(arr1[i]);
                i++;
                j++;
            }
        }

        if (intersection.empty()) {
            intersection.push_back(-1);
        }

        return intersection;
    }
};

#include <bits/stdc++.h> 
using namespace std; 
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i = n - 1, j = 0;

        while (i >= 0 && j < m) {
            if (arr1[i] > arr2[j]) {
                std::swap(arr1[i], arr2[j]);
            }
            i--;
            j++;
        }

        std::sort(arr1, arr1 + n);
        std::sort(arr2, arr2 + m); 
        } 
};

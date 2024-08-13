#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        int low = 0, high = n - 1;
        
        while (low <= high) {
            int pivot = arr[high];
            int i = low - 1;
            
            for (int j = low; j <= high - 1; j++) {
                if (arr[j] <= pivot) {
                    i++;
                    std::swap(arr[i], arr[j]);
                }
            }
            
            std::swap(arr[i + 1], arr[high]);
            int pivotIndex = i + 1;
            
            if (pivotIndex == k - 1)
                return arr[pivotIndex];
            else if (pivotIndex > k - 1)
                high = pivotIndex - 1;
            else
                low = pivotIndex + 1;
        }
        
        return -1;
    }
};

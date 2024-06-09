#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

// swapping the elements
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        int i, j;
        for(i = 0; i < n - 1; i++){
            for(j = 0; j < (n - i - 1); j++){
                if(arr[j] > arr[j + 1]){
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
         d = d % n;
        for (int start = 0, end = d - 1; start < end; ++start, --end) {
            swap(arr[start], arr[end]);
        }
        for (int start = d, end = n - 1; start < end; ++start, --end) {
            swap(arr[start], arr[end]);
        }
        for (int start = 0, end = n - 1; start < end; ++start, --end) {
            swap(arr[start], arr[end]);
        }
    }
};

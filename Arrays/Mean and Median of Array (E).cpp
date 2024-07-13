#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        sort(A,A+N);
        
        sort(A, A + N);

        if (N % 2 != 0) {
            return A[N / 2];  // For odd number of elements
        } else {
            int mid1 = A[N / 2 - 1];
            int mid2 = A[N / 2];
            return (mid1 + mid2) / 2;  // For even number of elements
        }
        
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += A[i];
        }
        return sum / N;
    }
};

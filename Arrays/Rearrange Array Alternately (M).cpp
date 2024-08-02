#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	int max_idx = n - 1, min_idx = 0;
        long long max_elem = arr[n - 1] + 1;
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                arr[i] += (arr[max_idx] % max_elem) * max_elem;
                max_idx--;
            } else {
                arr[i] += (arr[min_idx] % max_elem) * max_elem;
                min_idx++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            arr[i] /= max_elem;
        }
    	 
    }
};

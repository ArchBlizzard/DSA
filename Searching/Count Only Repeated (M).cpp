#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<long, long> findRepeating(long *arr, int n){
        long repeating_element = -1;
        long frequency = 1;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                repeating_element = arr[i];
                break;
            }
        }
        
        if (repeating_element == -1) {
            return {-1, -1};
        }
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == repeating_element) {
                frequency++;
            }
        }
        
        return {repeating_element, frequency - 1};
    }
};

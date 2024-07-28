#include<bits/stdc++.h>
using namespace std;



class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num){
        
        int inc_breaks = 0, dec_breaks = 0;

        for (int i = 0; i < num; i++) {
            if (arr[i] > arr[(i + 1) % num]) inc_breaks++;
            if (arr[i] < arr[(i + 1) % num]) dec_breaks++;
        }

        return (inc_breaks == 1 || dec_breaks == 1);
        
    }
};

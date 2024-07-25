#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> unionArr;
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                if (unionArr.empty() || unionArr.back() != arr1[i])
                    unionArr.push_back(arr1[i]);
                i++;
            } else if (arr1[i] > arr2[j]) {
                if (unionArr.empty() || unionArr.back() != arr2[j])
                    unionArr.push_back(arr2[j]);
                j++;
            } else {
                if (unionArr.empty() || unionArr.back() != arr1[i])
                    unionArr.push_back(arr1[i]);
                i++;
                j++;
            }
        }

        while (i < n) {
            if (unionArr.empty() || unionArr.back() != arr1[i])
                unionArr.push_back(arr1[i]);
            i++;
        }

        while (j < m) {
            if (unionArr.empty() || unionArr.back() != arr2[j])
                unionArr.push_back(arr2[j]);
            j++;
        }

        return unionArr;
        //return vector with correct order of elements
    }
};

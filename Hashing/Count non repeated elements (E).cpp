#include <bits/stdc++.h>
using namespace std
class Solution{

    public:

    //Complete this function

    //Function to return the count of non-repeated elements in the array.

    int countNonRepeated(int arr[], int n)

    {

        unordered_map<int, int> freq;

        

        for (int i = 0; i < n; ++i) {

            freq[arr[i]]++;

        }

        

        int countNonRepeated = 0;

        for (auto it = freq.begin(); it != freq.end(); ++it) {

            if (it->second == 1) {

                countNonRepeated++;

            }

        }

        

        return countNonRepeated;

    }



};

#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        unordered_map<int, int> freqMap;
        vector<int> result;
        
        for (int i = 0; i < n; ++i) {
            freqMap[arr[i]]++;
        }
       
        for (int i = 0; i < n; ++i) {
            if (freqMap[arr[i]] == 1) {
                result.push_back(arr[i]);
            }
        }
        
        return result;
    }
};

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

//User function template for C++

class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int low = 0, mid = 0, high = array.size() - 1;
        
        while (mid <= high) {
            if (array[mid] < a) {
                std::swap(array[low], array[mid]);
                low++;
                mid++;
            }
            else if (array[mid] > b) {
                std::swap(array[mid], array[high]);
                high--;
            }
            else {
                mid++;
            }
        }
    }
};

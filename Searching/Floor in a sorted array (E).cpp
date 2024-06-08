#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        if (x == 0 || v[0] > x){
        return -1;
        }
        int low = 0;
        int high = n - 1;
        while (low <= high){
            int mid = (low + high) / 2;
            if (v[mid] == x){
                return mid;
            }
            else if (v[mid] < x){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return high;
        
    }
};

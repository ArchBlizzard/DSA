#include <bits/stdc++.h>
using namespace std;


//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False

class Solution{
public:
    bool isLucky(int n, int counter = 2) {
        if (counter > n) return true;
        if (n % counter == 0) return false;
        int nextPosition = n - (n / counter);
        return isLucky(nextPosition, counter + 1);
    }
};

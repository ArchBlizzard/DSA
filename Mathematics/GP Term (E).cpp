#include<bits/stdc++.h>
using namespace std;


//User function Template for C++

class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        double r = (double)B / A;
        return A * pow(r, N - 1);
    }
};

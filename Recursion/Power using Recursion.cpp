#include <iostream>
using namespace std;
class Solution{
  public:
    int RecursivePower(int n,int p)
    {
        if(p == 0)
            return 1;
        else
            return n * RecursivePower(n, p - 1);
    }    
};

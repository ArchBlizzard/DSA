#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
       int middle = sizeOfStack / 2;
        deleteMiddle(s, middle);
    }

private:
    void deleteMiddle(stack<int>& s, int current) {
        if (current == 0) {
            s.pop();
            return;
        }
        int topElement = s.top();
        s.pop();
        deleteMiddle(s, current - 1);
        s.push(topElement);
    }
    
};

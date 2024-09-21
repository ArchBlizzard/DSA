#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);


//User function Template for C++


//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    stack<int> s;
    stack<int> minStack;
    
    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
        if (minStack.empty() || arr[i] <= minStack.top()) {
            minStack.push(arr[i]);
        } else {
            minStack.push(minStack.top());
        }
    }

    return minStack;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

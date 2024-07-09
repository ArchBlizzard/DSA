#include <bits/stdc++.h>
using namespace std;

//Function to rotate deque by k places in anti-clockwise direction.
void left_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    k = k % n; 
    for (int i = 0; i < k; i++) {
        int front = deq.front();
        deq.pop_front();
        deq.push_back(front);
    }
}

//Function to rotate deque by k places in clockwise direction.
void right_Rotate_Deq_ByK(deque<int> &deq, int n, int k)
{
    k = k % n;
    for (int i = 0; i < k; i++) {
        int back = deq.back();
        deq.pop_back();
        deq.push_front(back);
    }
}

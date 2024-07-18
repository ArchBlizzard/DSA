#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

class Solution{
  public:
    // A, B, and C: input sorted arrays
    //Function to merge three sorted vectors or arrays 
    //into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        vector<int> result;
        int i = 0, j = 0, k = 0;
        while (i < A.size() && j < B.size() && k < C.size()) {
            if (A[i] <= B[j] && A[i] <= C[k]) {
                result.push_back(A[i++]);
            } else if (B[j] <= A[i] && B[j] <= C[k]) {
                result.push_back(B[j++]);
            } else {
                result.push_back(C[k++]);
            }
        }
        while (i < A.size() && j < B.size()) {
            if (A[i] <= B[j]) {
                result.push_back(A[i++]);
            } else {
                result.push_back(B[j++]);
            }
        }
        while (i < A.size() && k < C.size()) {
            if (A[i] <= C[k]) {
                result.push_back(A[i++]);
            } else {
                result.push_back(C[k++]);
            }
        }
        while (j < B.size() && k < C.size()) {
            if (B[j] <= C[k]) {
                result.push_back(B[j++]);
            } else {
                result.push_back(C[k++]);
            }
        }
        while (i < A.size()) {
            result.push_back(A[i++]);
        }
        while (j < B.size()) {
            result.push_back(B[j++]);
        }
        while (k < C.size()) {
            result.push_back(C[k++]);
        }
        return result;
    } 

};

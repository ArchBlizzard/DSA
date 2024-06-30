#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    //Complete this function
    //Function to insert elements of array in the hashTable avoiding collisions.
    vector<vector<int>> separateChaining(int hashSize,int arr[],int sizeOfArray)
    {
        vector<vector<int>> hashTable(hashSize); 

        for (int i = 0; i < sizeOfArray; ++i) {
            int key = arr[i];
            int hashIndex = key % hashSize;

            hashTable[hashIndex].push_back(key);
        }

        return hashTable;
    }
};

#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        vector<int> hashTable(hashSize, -1); 
        
        for (int i = 0; i < sizeOfArray; ++i) {
            int key = arr[i];
            int hashIndex = key % hashSize;
            int count = 0;

            while (count < hashSize && hashTable[hashIndex] != -1 && hashTable[hashIndex] != key) {
                hashIndex = (hashIndex + 1) % hashSize;
                count++;
            }

            
            if (count < hashSize && hashTable[hashIndex] == -1) {
                hashTable[hashIndex] = key;
            }
        }

        return hashTable;//Your code here
    }

};

#include<bits/stdc++.h>
using namespace std;



class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        unordered_set<char> seen;
        for (char c : s) {
            if (seen.count(c)) 
                return false;
            seen.insert(c);
        }
        return true;
    }
};

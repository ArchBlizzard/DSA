#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       unordered_map<char, int> charCount;
        for (char c : S) {
            charCount[c]++;
        }
        for (char c : S) {
            if (charCount[c] == 1) {
                return c;
            }
        }
        return '$';
    }

};

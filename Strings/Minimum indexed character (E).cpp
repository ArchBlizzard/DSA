#include <bits/stdc++.h>
using namespace std;


class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        unordered_set<char> charSet(patt.begin(), patt.end());
        for (int i = 0; i < str.size(); i++) {
            if (charSet.find(str[i]) != charSet.end()) {
                return i;
            }
        }
        return -1;
    }
};

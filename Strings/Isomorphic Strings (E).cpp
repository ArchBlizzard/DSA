#include <bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        if (str1.length() != str2.length()) return false;
        
        unordered_map<char, char> map1, map2;
        
        for (int i = 0; i < str1.length(); i++) {
            char c1 = str1[i];
            char c2 = str2[i];
            
            if (map1.find(c1) != map1.end() && map1[c1] != c2) return false;
            if (map2.find(c2) != map2.end() && map2[c2] != c1) return false;
            
            map1[c1] = c2;
            map2[c2] = c1;
        }
        
        return true;
        
    }
};

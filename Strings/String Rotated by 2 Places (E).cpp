#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if (str1.length() != str2.length())
            return false;
        
        if (str1.length() < 2)
            return str1 == str2;
        
        string clockwise = str1.substr(2) + str1.substr(0, 2);
        string anticlockwise = str1.substr(str1.length() - 2) + str1.substr(0, str1.length() - 2);
        
        return (str2 == clockwise || str2 == anticlockwise);
    }

};

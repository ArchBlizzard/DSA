#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<char> lower, upper;
        for (char c : str)
        {
            if (islower(c))
                lower.push_back(c);
            else
                upper.push_back(c);
        }
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());

        int li = 0, ui = 0;
        for (int i = 0; i < n; i++)
        {
            if (islower(str[i]))
                str[i] = lower[li++];
            else
                str[i] = upper[ui++];
        }

        return str;
    }
};

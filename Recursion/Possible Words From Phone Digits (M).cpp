#include <bits/stdc++.h>
#include <string>

using namespace std;



//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        vector<string> result;
        if (N == 0) return result;
        
        string current = "";
        findCombinations(a, N, 0, current, result, mapping);
        
        return result;
    }
    
    void findCombinations(int a[], int N, int index, string &current, vector<string> &result, vector<string> &mapping) {
        if (index == N) {
            result.push_back(current);
            return;
        }
        
        string letters = mapping[a[index]];
        for (char c : letters) {
            current.push_back(c);
            findCombinations(a, N, index + 1, current, result, mapping);
            current.pop_back();
        }
    }
};

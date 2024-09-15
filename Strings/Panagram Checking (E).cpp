#include<bits/stdc++.h>
using namespace std;



//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        vector<bool> present(26, false);
        for (char c : s) {
            if (isalpha(c)) {
                present[tolower(c) - 'a'] = true;
            }
        }

        for (bool p : present) {
            if (!p) {
                return false;
            }
        }
        return true;
    }

};

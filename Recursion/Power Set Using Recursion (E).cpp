#include <bits/stdc++.h>
using namespace std;


//User function Template for C++

//Function to return the lexicographically sorted power-set of the string.
void generatePowerSet(const std::string &s, int index, std::string current, std::vector<std::string> &result) {
    if (index == s.size()) {
        result.push_back(current);
        return;
    }
    generatePowerSet(s, index + 1, current + s[index], result);
    generatePowerSet(s, index + 1, current, result);
}
vector <string> powerSet(string s)
{
   vector<string> result;
    generatePowerSet(s, 0, "", result);
    return result;
}

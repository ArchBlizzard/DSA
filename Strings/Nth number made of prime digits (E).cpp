#include <bits/stdc++.h>
using namespace std;



// User function template for C++

class Solution {
  public:
    // Function to find nth number made of only prime digits.
    int primeDigits(int n) {
        vector<string> primeDigits = {"2", "3", "5", "7"};
        queue<string> q;

        for (const string& digit : primeDigits) {
            q.push(digit);
        }

        int count = 0;
        string result;

        while (!q.empty()) {
            result = q.front();
            q.pop();
            count++;

            if (count == n) {
                break;
            }

            for (const string& digit : primeDigits) {
                q.push(result + digit);
            }
        }

        return stoi(result);
    }
};

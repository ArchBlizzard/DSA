#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int num : arr) {
            freq[num]++;
        }

        vector<pair<int, int>> elements;
        for(auto it = freq.begin(); it != freq.end(); ++it) {
            elements.push_back({it->second, it->first});
        }

        sort(elements.begin(), elements.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if(a.first == b.first) {
                return a.second < b.second;
            }
            return a.first > b.first;
        });

        vector<int> sortedArr;
        for(const auto& element : elements) {
            for(int i = 0; i < element.first; i++) {
                sortedArr.push_back(element.second);
            }
        }

        return sortedArr;
    }
};

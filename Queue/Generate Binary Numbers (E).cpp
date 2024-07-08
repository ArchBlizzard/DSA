#include<bits/stdc++.h>
using namespace std;
vector<string> generate(int N)
{
	vector<string> result;
    queue<string> q;

    q.push("1");
    while (N--) {
        string curr = q.front();
        q.pop();
        result.push_back(curr);
        
        q.push(curr + "0");
        q.push(curr + "1");
    }
    
    return result;
}

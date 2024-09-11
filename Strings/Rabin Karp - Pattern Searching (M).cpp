#include<bits/stdc++.h>

using namespace std;

bool search(string, string, int);

//User function Template for C++

// d is the number of characters in the input alphabet 
#define d 256 

//Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q) 
{ 
	int M = pat.length();
    int N = txt.length();
    int p = 0, t = 0, h = 1;

    for (int i = 0; i < M - 1; i++)
        h = (h * d) % q;

    for (int i = 0; i < M; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    for (int i = 0; i <= N - M; i++) {
        if (p == t) {
            int j = 0;
            for (; j < M; j++)
                if (txt[i + j] != pat[j])
                    break;
            if (j == M)
                return true;
        }

        if (i < N - M) {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;
            if (t < 0)
                t = (t + q);
        }
    }

    return false;
} 

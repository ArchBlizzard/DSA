#include <iostream>
using namespace std;
class Solution{
    public:
     
    long long toh(int N, int from, int to, int aux) {
        if(N == 0) return 0;
        
        if(N == 1){
            cout<<"move disk "<< N <<" from rod "<< from <<" to rod "<< to <<endl;
            
            return 1;
        }
        else{
            int steps = 0;
            steps += toh(N - 1, from, aux, to);
            cout<<"move disk "<< N <<" from rod "<< from <<" to rod "<< to <<endl;
            steps += 1;
            steps += toh(N - 1, aux, to, from);
            return steps;}
    }

};

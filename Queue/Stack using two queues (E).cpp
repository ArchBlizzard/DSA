#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        if (!q1.empty()) {
            q1.push(x);
        } else {
            q2.push(x);
        }// Your Code
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if (q1.empty() && q2.empty()) {
            return -1;
        }

        if (!q1.empty()) {
            while (q1.size() > 1) {
                q2.push(q1.front());
                q1.pop();
            }
            int poppedElement = q1.front();
            q1.pop();
            return poppedElement;
        } else {
            while (q2.size() > 1) {
                q1.push(q2.front());
                q2.pop();
            }
            int poppedElement = q2.front();
            q2.pop();
            return poppedElement;
        }       
}

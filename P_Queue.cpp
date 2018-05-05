#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main ()
{
    priority_queue<int>pq;
    pq.push(100);
    pq.push(10);
    pq.push(10000);
    pq.push(101);
    cout << pq.size() << endl;
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}

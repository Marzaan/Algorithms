#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main ()
{
    vector<int>outdegree[100];
    vector<int>indegree[100];
    queue<int>qu;
    int ar[100];

    int i,x,y,n,e;
    cin >> n >> e;


    for(i=0;i<e;i++){
        cin >> x >> y;
        outdegree[x].push_back(y);
        indegree[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        ar[i]=indegree[i].size();
    }
    while(1){
        for(int i=1;i<=n;i++){
            if(ar[i]==0){
                ar[i]=-100;
                int x=outdegree[i].size();
                qu.push(i);
                for(int j=0;j<x;j++){
                    ar[outdegree[i][j]]-=1;
                }
            break;
            }
            else{
                continue;
            }
        }
        if(qu.size()==n){
            break;
        }
    }
    while(!qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }
    return 0;
}
/*
6 6
6 1
6 3
3 4
4 2
5 2
5 1
...
8 8
1 3
2 3
2 4
3 5
5 6
5 8
6 7
4 6
*/
//for(i=0;i<indegree[3].size();i++){
//  cout << indegree[3][i] << " ";
//}
//cout << endl << "Indegree :" << indegree[4].size() << endl << endl << "Outdegree :" << outdegree[4].size() << endl;

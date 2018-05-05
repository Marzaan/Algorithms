#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int a[MAX][MAX];
int visit[MAX];
int level[MAX];
int node,edge;

void bfs(int start)
{
    queue<int>Q;
    Q.push(start);
    visit[start]=1;
    level[start]=0;
    cout << "BFS: ";
    while(!Q.empty()){
        int u=Q.front();
        for(int v=1;v<=node;v++){
            if(a[u][v]==1 && visit[v]==0){
                visit[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
        cout << Q.front() << " ";
        Q.pop();
    }
}

int main()
{
    int i,x,y;
    cin >> node >> edge;
    for(i=0;i<edge;i++){
        cin >> x >> y;
        a[x][y]=1;
        a[y][x]=1;
    }
    int start,endd;
    cin >> start >> endd;
    bfs(start);
    cout << endl << "Distance from " << start << " to " << endd << " is: "<< level[endd];
    return 0;
}


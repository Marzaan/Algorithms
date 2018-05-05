#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define MAX 100
int edge,node;
int a[MAX][MAX];
int visit[MAX];

void bfs(int start)
{
    queue<int>q;
    q.push(start);
    visit[start]=1;


    while(!q.empty())
    {
        int u=q.front();
        for(int v=1;v<=node;v++){
            if(a[u][v]==1 && visit[v]==0){
                visit[v]=1;
                q.push(v);
            }
        }
        cout << q.front() << " ";
        q.pop();
    }
    return;
}
int main ()
{
    int start=1;
    int x,y;

    cin >> node >> edge;

    for(int i=0;i<edge;i++){
        cin >> x >> y;
        a[x][y]=1;
        a[y][x]=1;
    }
    bfs(start);
    return 0;
}
/*10 13
1 4
1 3
1 2
2 6
3 7
3 8
4 7
5 8
5 10
6 10
7 8
9 10
7 9*/

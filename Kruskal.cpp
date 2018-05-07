#include<bits/stdc++.h>
using namespace std;
#define MAX 100
struct edge{
    int u,v,w;
    //for sorting...
     bool operator<(const edge& p) const
    {
        return w < p.w;
    }
};
vector<edge>e;
int pr[MAX];

int parent(int x){
    if(pr[x]==x){
        return x;
    }
    else{
        return parent(pr[x]);
    }
}
int mst(int n){
    sort(e.begin(),e.end());
    for(int i=1;i<=n;i++){
        pr[i]=i;
    }
    int sum=0,s=0,a=0;
    a=(int)e.size();
    cout << "Here the graph: ";
    for(int i=0;i<a;i++){
        int u=parent(e[i].u);
        int v=parent(e[i].v);

        if(u!=v){
            pr[u]=v;
            sum++;
            s+=e[i].w;
            cout << e[i].u << " " << e[i].v << " " << e[i].w << endl;
            if(sum==n-1){
                break;
            }
        }
    }
    return s;
}
int main ()
{
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        edge e1;
        e1.u=u;
        e1.v=v;
        e1.w=w;
        e.push_back(e1);
    }
    cout << "The minimum cost is: " << mst(n) <<endl;
    return 0;
}
/*
11 17
1 2 2
1 10 3
1 11 5
2 3 4
2 9 3
3 4 8
3 9 1
4 5 9
4 8 5
4 7 6
5 6 5
5 8 7
6 7 4
7 8 8
8 9 2
9 10 1
10 11 1
*/

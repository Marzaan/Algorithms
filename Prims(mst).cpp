#include<bits/stdc++.h>
using namespace std;

priority_queue < pair < int,int > ,vector< pair < int,int > >,greater< pair < int,int > >  > edges;
int n,m;
vector< pair< int,int > > sample;
vector < vector < pair< int,int > >  > ad(1000,sample);
int vis[1001];
int mst_w=0;

int main ()
{
    cin >> n >> m;
    int z=m;
    int a,b,w;
    while(z--){
        cin >> a >> b >> w;
        ad[a].push_back(make_pair(w,b));
        ad[b].push_back(make_pair(w,a));
    }
    int cnode=1,vsin=0;
    while(vsin<n-1){
        vis[cnode]=1;
        vsin++;
        for(int i=0;i<ad[cnode].size();i++){
            edges.push(ad[cnode][i]);
        }
        while(vis[edges.top().second]==1){
            edges.pop();
        }
        mst_w+=edges.top().first;
        cnode=edges.top().second;
        edges.pop();
    }
    cout << mst_w << endl;
    return 0;
}

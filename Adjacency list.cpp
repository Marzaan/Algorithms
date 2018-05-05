#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    vector<int>edges[100];
    vector<int>degree[100];
    vector<int>costs[100];

    int i,j,in,out,x,y,node,edge,cost;
    cin >> node >> edge;

    for(i=1;i<=edge;i++){
        cin >> x >> y >> cost;
        edges[x].push_back(y);
        costs[x].push_back(cost);
        degree[y].push_back(1);
    }
    for(i=1;i<=node;i++){
        cout << "The node " << i << "'s outdegree is: " << edges[i].size() << endl;
        cout << "The node " << i << "'s indegree is: " << degree[i].size() << endl;
        cout << "The node " << i << " connected with: ";
        for(j=0;j<edges[i].size();j++){
            cout << edges[i][j] << " with cost: "<< costs[i][j] << " ";
            if(j<edges[i].size()-1){
                cout << "and ";
            }
        }
        cout << endl << endl;
    }
    return 0;
}

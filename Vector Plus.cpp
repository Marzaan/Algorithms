#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector< int > v;
    for(int i=0; i<11; i++){
        v.push_back( i );
    }
    do {
        // protitat jama prottekke porai dekho shukh maximize hochche kina
    }while( next_permutation( v.begin(), v.end() ) );
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}

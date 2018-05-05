#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main ()
{
    vector<int>x;
/*
    x.push_back(3);
    x.push_back(1);
    x.push_back(2);
    x.push_back(5);
    x.push_back(4);
*/
    int a,b;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> b;
        x.push_back(b);
    }
    vector<int> :: iterator i;
    for(i=x.begin();i<x.end();i++){
        cout << *i << " ";
    }
    cout << endl;
    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++){
        cout << x[i] << " ";
    }
    cout << endl;

    reverse(x.begin(),x.end());
    for(i=x.begin();i<x.end();i++){
        cout << *i << " ";
    }
    return 0;
}

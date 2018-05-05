#include<bits/stdc++.h>
#include<set>
#include<map>
using namespace std;
int main ()
{

    set<int>s;
    s.insert(10);
    s.insert(10);
    s.insert(100);
    s.insert(50);
    set<int> :: iterator i,j;
    i=s.end();
    j=s.begin();
    cout << *i << endl << *j << endl;
    for(i=s.begin();i!=s.end();i++){
        cout << *i << endl;
    }
/*
    map< string, int > m;
    string goru;
    while( cin >> goru ) {
        if( goru == "moro" ){
            break;
        }
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;
    }
    */
    return 0;
}

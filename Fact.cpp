#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n<1){
        return 1;
    }
    else{
        cout << n*fact(n-1) << " ";
        return n*fact(n-1);
    }
}
int main()
{
    int x,y;
    cin >> x;
    y=fact(x);
    cout << endl << y;
}

#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}

int main ()
{
    int x,y;
    cin >> x;
    y=sum(x);
    cout << y;
    return 0;
}


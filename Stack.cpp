#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main ()
{
    stack<int>st;
    st.push(10);
    st.push(100);
    st.push(1000);
    st.push(10000);
    cout << st.size() << endl;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}

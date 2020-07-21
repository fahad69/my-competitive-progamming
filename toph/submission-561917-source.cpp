#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;
    for (int i = 1; i <= t ; ++i) {
        int a, b;
        char ch;
        cin>>a>>ch>>b;
        cout<<"Case "<<i<<": ";
        if(ch=='+')
            cout<<a+b<<endl;
        if(ch=='-')
            cout<<a-b<<endl;
        if(ch=='*')
            cout<<a*b<<endl;

    }

}
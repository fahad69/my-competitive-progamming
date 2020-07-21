#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        int x, y, a, b;
        cin>>x>>y>>a>>b;

        if(abs(x-a)==abs(y-b))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }



}
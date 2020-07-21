#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    int t;
    cin>>t;

    int a, b, c;
    cin>>a>>b>>c;
    a = min(a, min(b,c));

    if(t-a>9)
        cout<<"Yes :-D";
    else
        cout<<"No :-(";



}
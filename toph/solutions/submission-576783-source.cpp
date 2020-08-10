#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<string ,int> p1, pair<string ,int> p2)
{
    return p1.second>p2.second;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int a, b,c;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c));
    return 0;
}


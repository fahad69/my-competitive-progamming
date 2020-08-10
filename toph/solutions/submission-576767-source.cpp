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
    int t;
    cin >> t;
    set<int> pp;
    for (int i = 0; i < t; ++i)
    {
        int x;
        cin>>x;
        pp.insert(x);
    }
    
    int c = 0;
    for (int i = 0; i < t; ++i)
    {
        int x;
        cin>>x;
        if(pp.find(x)!=pp.end())
            c++;
    }
    cout<<c;
    return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    
    int n, m;
    cin>>n>>m;
    unordered_set<string> pp;
    pp.insert("hello");
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin>>a>>b;
        int x = max(a,b);
        int y = min(a,b);
        string p = to_string(x) + "$" + to_string(y);
        if(pp.find(p)==pp.end())
        {
            cout<<"new\n";
            pp.insert(p);
        }
        else
            cout<<"old\n";
            
            
    }
    
    return 0;
}


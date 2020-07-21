#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    
    int t, N = 0,S = 0,U = 0;
    cin>>t;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]=='N')
            N++;
        else if(s[i]=='S')
            S++;
        else if(s[i]=='U')
            U++;
    }
    cout<<min(N, min(S,U));
}
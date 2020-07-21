#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);

    int t, x, s = 0;
    cin>>t>>x;
    for (int i = 0; i < t; ++i) {
        int p;
        cin>>p;
        s +=p;
    }
    
    if(s>x)
        cout<<"Yes";
    else 
        cout<<"No";
    
    
}
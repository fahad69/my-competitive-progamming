#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;
    long long mx = -1;
    for (int i = 0; i < t; ++i) {
        long long p;
        cin>>p;
        mx = max(mx,p);
    }
    
    cout<<mx;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        long long ans = (n-1)*2 + (n-1)*(2*n-6);
        cout<<ans<<endl;

    }
    return 0;
}


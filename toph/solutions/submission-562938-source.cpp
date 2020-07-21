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
        int x = 0;
        for (int j = 0; j < n; ++j) {
            int pp;
            cin>>pp;
            x = x|pp;
        }

        cout<<"Case "<<i+1<<": "<<x<<endl;

    }
    return 0;
}


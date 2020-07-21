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
        int n, k;
        cin>>n>>k;
        int total = n*k, sum = 0;
        for (int j = 0; j < n; ++j) {
            int x;
            cin>>x;
            sum += x;
        }

        int needed = (total-sum);
        //cout<<needed<<endl;
        int ans = needed/k ;
        if(needed%k!=0)
            ans++;
        cout<<ans<<endl;

    }



    return 0;
}


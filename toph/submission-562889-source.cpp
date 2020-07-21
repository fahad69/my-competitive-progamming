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
        int m;
        cin>>m;
        vector<long long> pp;
        for (int j = 0; j < m; ++j) {
            long long xx;
            cin>>xx;
            pp.push_back(xx);
        }

        sort(pp.begin(), pp.end());
        int cnt = 0;
        long long sum = 0;
        for (int k = pp.size()-1; k>=0 ; k--) {
            sum+=pp[k];
            cnt++;
            if(cnt>n-1)
                break;
        }

        cout<<sum<<"\n";

    }
    return 0;
}


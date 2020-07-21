#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;
    for (int i = 1; i <= t; ++i) {
        long long n, k, x;
        cin>>n>>k>>x;
        vector<long long> pp;
        for (int j = 0; j < n; ++j) {
            long long t1;
            cin>>t1;
            pp.push_back(t1);
        }

        int flag = 0;
        for (int l = 0; l < n - 1; ++l) {
            if(pp[l+1]<pp[l])
            {
                long long diff = pp[l] - pp[l+1];
                long long req;
                if(diff%x==0)
                    req = diff/x;
                else
                    req = diff/x + 1;

                if(req<=k)
                {
                    k = k - req;
                    pp[l+1] += req*x;
                }
                else {
                    flag = 1;
                    break;
                }
            }
        }

        if(flag==0)
            printf("Case %d: YES\n", i);
        else
            printf("Case %d: NO\n", i);
    }
    return 0;
}
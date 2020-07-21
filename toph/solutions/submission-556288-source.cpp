#include <bits/stdc++.h>

using namespace std;

long long maxx(long long a, long long b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{

    int t;
    cin>>t;
    for (int i = 1; i <= t ; ++i) {
        int n;
        cin>>n;
        long long mx = -1;
        for (long long j = 0; j < n; ++j) {
            long long x;
            cin>>x;
            long long product = x*(n-j);
            mx = maxx(product, mx);
        }

        printf("Case %d: %lld\n", i, mx);
    }
    return 0;
}
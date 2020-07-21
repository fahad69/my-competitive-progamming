#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    scanf("%d", &n);

    for (long long j = 1; j <= n ; ++j) {
        long long x;
        cin>>x;
        x = (x*(x-1)*(x-2)*(x-3))/24;
        printf("Case %lld: %lld\n", j, x);
    }

    return 0;
}
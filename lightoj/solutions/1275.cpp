#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    cin >> T;
    int val = 0;

    while (T--)
    {
        long long N, C;
        cin >> N >> C;
        if (N == 0)
            printf("Case %d: 0\n", ++val);
        else
        {
            long long T1 = C / (2 * N);
            long long T2 = C / (2 * N) + 1;
            if (T1 * (C - T1 * N) >= T2 * (C - T2 * N))
                printf("Case %d: %lld\n", ++val, T1);
            else
                printf("Case %d: %lld\n", ++val, T2);
        }
    }
    return 0;
}

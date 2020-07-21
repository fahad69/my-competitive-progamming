#include <bits/stdc++.h>
using namespace std;

double ar[1000001];
void fact(void)
{
    for (int i = 1; i <= 1000000; i++)
        ar[i] = ar[i - 1] + log(i);
}

main()
{
    long long T, n, base, cnt = 0;
    cin >> T;
    fact();
    while (T--)
    {
        double ans = 0, x;
        cin >> n >> base;
        x = log(base);

        ans += ar[n] / x;

        ++cnt;
        long long res = ans + 1;
        //printf("Case %d: %lf\n", cnt, floor(ans) );
        cout << "Case " << cnt << ": " << res << endl;
    }
}

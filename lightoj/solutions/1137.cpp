#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt", "r", stdin);
    int T, no = 0;
    cin >> T;
    while (T--)
    {
        double c, L, C, n, s, r, lo = 0.0, b, eps = 1e-9, s1, a;
        cin >> L >> n >> C;
        double hi = L;
        s = (1.0 + n * C) * L;
        c = L / 2.0;
        while (hi - lo > eps)
        {
            b = (hi + lo) / 2.0;
            r = b / 2.0 + (c * c / (2 * b));
            a = 2.0 * asin(c / r);
            s1 = r * a;
            if (s1 > s)
                hi = b;
            else
                lo = b;
        }

        printf("Case %d: %lf\n", ++no, b);
    }
    return 0;
}

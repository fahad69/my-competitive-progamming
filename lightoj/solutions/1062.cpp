#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        double x, y, c;
        cin >> x >> y >> c;
        double lo = 0, hi = min(x, y), eps = 1e-7;
        while ((hi - lo) > eps)
        {
            double w = (lo + hi) / 2;
            double p = sqrt(x * x - w * w);
            double q = sqrt(y * y - w * w);
            double c_p = (p * q) / (p + q);
            if (c_p > c)
                lo = w;
            else
                hi = w;
        }
        cout << "Case " << (i++) << ": " << setprecision(7) << fixed << lo << endl;
    }
}

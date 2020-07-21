#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int t, ti;
    double r1, r2, r3, h, p, x, v, pi = acos(-1.0);
    cin >> t;
    for (ti = 1; ti <= t; ti++)
    {
        cin >> r1 >> r2 >> h >> p;
        x = r1 / (r1 - r2) * h;
        r3 = r2 * (x - h + p) / (x - h);
        v = r3 * r3 * (x - h + p) - r2 * r2 * (x - h);
        v *= pi / 3;
        printf("Case %d: %.8lf\n", ti, v);
    }

    return 0;
}

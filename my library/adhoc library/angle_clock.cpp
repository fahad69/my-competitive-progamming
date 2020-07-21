#include <bits/stdc++.h>

using namespace std;

void solve(int h, int m)
{
    double hour_angle = 0.5 * (h * 60 + m);
    double minute_angle = 6 * m;

    double angle = fabs(hour_angle - minute_angle);
    angle = min(360 - angle, angle);
    cout<<angle;
}

int main()
{
    int H, M;
    cin>>H>>M;

    solve(H, M);

    return 0;
}
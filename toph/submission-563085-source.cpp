#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; ++i) {
        double x1, x2, y1, y2, L;
        scanf("%lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &L);

        double dist =sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
        double a = L/2.0;
        double b = sqrt(a*a-(dist/2.0)*(dist/2.0) );

        printf("%.10lf\n", acos(-1.0)*a*b);
    }

    return 0;
}


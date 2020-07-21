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
    scanf("%d", &t);
    for (int i = 1; i <= t ; ++i) {
        int n;
        scanf("%d", &n);
        long long a[n][2];
        for (int j = 0; j < n; ++j) {
            int x, y;
            cin>>x>>y;
            a[j][0] = x;
            a[j][1] = y;
        }
        long long mxx = -1;
        for (int p = 0; p < n; ++p) {
            for (int q = 0; q < p; ++q)
            {
                {
                    long long distance = (a[p][0] - a[q][0])*(a[p][0] - a[q][0]) + (a[p][1] - a[q][1])*(a[p][1] - a[q][1]);
                    mxx = maxx(distance, mxx);
                }
            }
        }

        printf("Case %d: %lld\n", i, mxx);
    }







}













/*int n;
    scanf("%d", &n);
    for (int i = 1; i <= n ; ++i) {
        double p;
        scanf("%lf", &p);
        printf("Case %d: %.2lf\n", i, 8*p*p-2*3.1416*p*p);
    }*/
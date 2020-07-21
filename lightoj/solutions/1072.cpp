#include <stdio.h>
#include <math.h>

main()
{
    //freopen("1072i.txt", "r", stdin);
    //freopen("1072o.txt", "w", stdout);
    double pi = acos(-1.0);
    int cases, no = 0;
    scanf("%d", &cases);
    while (cases--)
    {
        double R, th, r;
        int n;
        scanf("%lf %d", &R, &n);
        th = pi / n;

        r = R * (sin(th)) / (1 + sin(th));

        printf("Case %d: %.7lf\n", ++no, r);
    }
}

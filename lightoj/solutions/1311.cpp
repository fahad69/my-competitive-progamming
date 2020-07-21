#include <stdio.h>

main()
{
    int cases, cnt = 0;
    scanf("%d", &cases);
    while (cases--)
    {
        double v1, v2, v3, a1, a2;
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        double d1, d2, t1, t2;

        t1 = v1 / a1;
        t2 = v2 / a2;
        d1 = v1 * t1 + v2 * t2 - .5 * t1 * t1 * a1 - .5 * a2 * t2 * t2;
        if (t1 > t2)
            d2 = t1 * v3;
        else
            d2 = t2 * v3;

        printf("Case %d: %.8lf %.8lf\n", ++cnt, d1, d2);
    }
}

#include <stdio.h>
#include <math.h>

main()
{
    //freopen("in.txt", "r", stdin);
    int cases, no = 0;
    scanf("%d", &cases);
    while (cases--)
    {
        double m, lo, h, a, b, c, d, ans, max, min;
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

        max = a > c ? a : c;
        min = a + c - max;
        a = max;
        c = min;
        h = sqrt((a + b - c + d) * (-a + b + c + d) * (a - b - c + d) * (a + b - c - d) / (4 * (a - c) * (a - c)));

        ans = (a + c) * h / 2.0;
        printf("Case %d: %.8lf\n", ++no, ans);
    }
}

#include <stdio.h>
#include <math.h>

main()
{
    int cases, n = 0;
    scanf("%d", &cases);
    while (cases--)
    {
        double r1, r2, r3, s, area, th1, th2, th3, a, b, c, res, d, aa, bb, cc;
        scanf("%lf %lf %lf", &r1, &r2, &r3);
        n++;
        printf("Case %d: ", n);
        a = r1 + r3;
        b = r2 + r3;
        c = r1 + r2;

        s = (r1 + r2 + r3);
        d = s * (s - a) * (s - b) * (s - c);

        area = sqrt(d);
        //printf("%f", area);

        aa = (a * a + c * c - b * b) / (2.0 * a * c);
        th1 = acos(aa);
        bb = (b * b + c * c - a * a) / (2.0 * b * c);
        th2 = acos(bb);
        cc = (a * a + b * b - c * c) / (2.0 * a * b);
        th3 = acos(cc);

        res = area - .5 * (r1 * r1 * th1 + r2 * r2 * th2 + r3 * r3 * th3);

        printf("%.8lf\n", res);

        //printf ("Case %d: %.8f\n", ++c, res);
    }
}

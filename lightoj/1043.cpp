#include <stdio.h>
#include <math.h>

main()
{
    //freopen("in.txt", "r", stdin);
    int cases, no = 0;
    scanf("%d", &cases);
    while (cases--)
    {
        double a, c, b, r, H, h, dABC, dADC, DE, s, AD;
        scanf("%lf %lf %lf %lf", &a, &c, &b, &r);
        s = (a + b + c) / 2.0;
        dABC = sqrt(s * (s - a) * (s - b) * (s - c));
        H = 2 * dABC / b;

        dADC = r * dABC / (1 + r);
        DE = sqrt(2 * dADC * b / H);

        h = H * DE / b;
        AD = h * a / H;

        printf("Case %d: %.9lf\n", ++no, AD);
    }
}

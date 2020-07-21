#include <stdio.h>
#include <math.h>

main()
{
    //freopen("in.txt", "r", stdin);
    int cases, n = 0;
    scanf("%d", &cases);
    while (cases--)
    {
        long long Ox, Oy, Ax, Ay, Bx, By;
        double m1, m2, res, pi, theta, rd1, rd2;
        pi = acos(-1.0);

        scanf("%lld %lld %lld %lld %lld %lld", &Ox, &Oy, &Ax, &Ay, &Bx, &By);

        rd1 = sqrt((Ax - Ox) * (Ax - Ox) + (Ay - Oy) * (Ay - Oy));

        /*if( Ox == Ax == Bx || Oy == Ay == By )
            {printf("Case %d: %.8lf\n", ++n, pi*rd1); continue; }
 
            if(Ax == Bx && Ay == By )
            {printf("Case %d: %.8lf\n", ++n, 2*pi*rd1); continue; }*/

        /*if( rd1 == 0)
            {printf("Case %d: 0\n", ++n); continue; }*/

        m1 = sqrt((Ax - Bx) * (Ax - Bx) + (Ay - By) * (Ay - By));

        theta = acos(1 - m1 * m1 / (2 * rd1 * rd1));

        res = theta * rd1;
        if (res < 0)
            res = 0 - res;
        printf("Case %d: %.8lf\n", ++n, res);
    }
}

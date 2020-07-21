#include <stdio.h>
#include <math.h>

int mn(long long n)
{
    long long temp;
    temp = sqrt(n);
    if (temp * temp == n)
        return 1;
    else
        return 0;
}

main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while (cases--)
    {
        long long a, r1, r2, r3, r4, r5;
        scanf("%lld", &a);
        r1 = sqrt(a);
        r2 = (r1 + 1) * (r1 + 1) - r1;
        r3 = mn(a);
        r4 = r1 * r1;
        r5 = r2 + r1 + 1;

        if (r3 == 1 && a % 2 == 0)
            printf("Case %d: %lld 1\n", ++caseno, r1);

        else if (r3 == 1 && a % 2 != 0)
            printf("Case %d: 1 %lld\n", ++caseno, r1);

        else if (r2 == a)
            printf("Case %d: %lld %lld\n", ++caseno, r1 + 1, r1 + 1);

        else if (r1 % 2 == 0 && a < r2)
            printf("Case %d: %lld %lld\n", ++caseno, r1 + 1, a - r4);

        else if (r1 % 2 == 0 && a > r2)
            printf("Case %d: %lld %lld\n", ++caseno, r5 - a, r1 + 1);

        else if (r1 % 2 != 0 && a > r2)
            printf("Case %d: %lld %lld\n", ++caseno, r1 + 1, r5 - a);

        else if (r1 % 2 != 0 && a < r2)
            printf("Case %d: %lld %lld\n", ++caseno, a - r4, r1 + 1);
    }
}

#include <stdio.h>
#include <math.h>

main()
{
    int caseno = 0, cases;
    long long a, i, x;

    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%lld", &a);
        i = a;
        if (a % 2 != 0)
            printf("Case %d: Impossible\n", ++caseno);
        else
        {
            while (1)
            {
                a = a / 2;
                if (a % 2 != 0)
                {
                    printf("Case %d: %lld %lld\n", ++caseno, a, i / a);

                    break;
                }
            }
        }

        //printf("Case %d: %d", ++caseno, a);
    }
}

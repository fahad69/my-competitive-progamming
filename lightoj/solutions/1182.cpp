#include <stdio.h>

int onroy(int n)
{
    int mask = 1, onr = 0, i;
    for (i = 0; i < 31; i++)
    {
        if (mask & n)
            onr++;

        mask = mask << 1;
    }
    return onr;
}

main()
{
    int n, caseno = 0, cases, a;

    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d", &n);
        a = onroy(n);
        if (a % 2 == 0)
            printf("Case %d: even\n", ++caseno);
        else
            printf("Case %d: odd\n", ++caseno);
    }
}

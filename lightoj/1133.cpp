#include <stdio.h>

main()
{
    int n, caseno = 0, cases, a, temp, x, y;
    scanf("%d", &cases);

    while (cases--)
    {
        scanf("%d %d", &n, &a);
        int a1[n];
        int i, d, s, m, j;
        char op;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a1[i]);
        }

    x:
        scanf(" %c", &op);

        if (op == 'S')
        {
            scanf("%d", &s);
            for (i = 0; i < n; i++)
            {
                a1[i] = a1[i] + s;
            }
        }

        if (op == 'M')
        {
            scanf("%d", &m);
            for (i = 0; i < n; i++)
            {
                a1[i] = a1[i] * m;
            }
        }

        if (op == 'D')
        {
            scanf("%d", &d);
            for (i = 0; i < n; i++)
            {
                a1[i] = a1[i] / d;
            }
        }

        if (op == 'R')
        {
            for (i = 0, j = n - 1; i < n / 2; i++, j--)
            {
                temp = a1[i];
                a1[i] = a1[j];
                a1[j] = temp;
            }
        }

        if (op == 'P')
        {
            scanf("%d %d", &x, &y);
            temp = a1[x];
            a1[x] = a1[y];
            a1[y] = temp;
        }

        a--;
        while (a)
            goto x;

        printf("Case %d:\n", ++caseno);
        for (i = 0; i < n; i++)
        {
            if (i == n - 1)
                printf("%d\n", a1[i]);
            else
                printf("%d ", a1[i]);
        }
    }
}

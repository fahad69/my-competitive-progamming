#include <stdio.h>
//#include<string.h>
#include <math.h>

int isPrime(int n)
{
    int i;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return 0;

    return 1;
}

int find(int n)
{
    int i, j, c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }

    return c;
}

main()
{
    //freopen("out.txt", "r", stdin);
    //freopen("out1.txt", "w", stdout);
    int x1, x2, y1, y2, x3, x4, y3, y4, c = 1, i, t, j, t1;

    int a[1001][2];

    for (i = 1; i <= 1000; i++)
    {
        a[i][1] = find(i);
        a[i][0] = i;
    }

    for (i = 1; i <= 1000; i++)
    {
        for (j = i + 1; j <= 1000; j++)
        {
            if (a[j][1] < a[i][1])
            {
                t = a[i][1];
                a[i][1] = a[j][1];
                a[j][1] = t;

                t = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = t;
            }
        }
    }

    for (i = 1; i <= 1000; i++)
    {
        for (j = i + 1; j <= 1000; j++)
        {
            if (a[j][0] > a[i][0] && a[j][1] == a[i][1])
            {
                t = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = t;
            }
        }
    }

    /*for(i = 1; i<=1000; i++)
    {
        printf("%3d %3d\n", a[i][1], a[i][0]);
    }*/
    int x, cases, no = 0;
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d", &x);
        printf("Case %d: %d\n", ++no, a[x][0]);
    }
}

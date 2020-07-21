#include <stdio.h>

main()
{
    int cases, n, cnt = 0;
    scanf("%d", &cases);

    while (cases--)
    {

        int i, k = 0, sum = 0, avg = 0, t = -1, g = -1;
        scanf("%d", &n);
        char name[n][30];
        int dim[n][4];
        for (i = 0; i < n; i++)
        {
            scanf("%s %d %d %d", &name[i], &dim[i][0], &dim[i][1], &dim[i][2]);
            dim[i][3] = dim[i][0] * dim[i][1] * dim[i][2];
            sum = sum + dim[i][3];
        }

        avg = sum / n;

        for (i = 0; i < n; i++)
        {
            if ((dim[i][3] - avg) > 0)
                t = i;

            if ((avg - dim[i][3]) > 0)
                g = i;
        }

        if (t == -1 && g == -1)
            printf("Case %d: no thief\n", ++cnt);
        else
            printf("Case %d: %s took chocolate from %s\n", ++cnt, name[t], name[g]);
    }
}

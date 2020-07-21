#include <stdio.h>
#include <string.h>

main()
{
    int n, caseno = 0, cases, a, i, sum = 0, flag;
    scanf("%d", &cases);
    char kk[50];
    while (cases--)
    {
        scanf("%d", &n);
        sum = 0, flag = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%s", kk);
            if (strcmp(kk, "donate") == 0)
            {
                scanf("%d", &a);
                sum = sum + a;
            }
            if (strcmp(kk, "report") == 0)
            {
                if (flag == 0)
                {
                    printf("Case %d:\n", ++caseno);
                    flag = 1;
                }
                printf("%d\n", sum);
            }
        }
    }
}

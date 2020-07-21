#include <stdio.h>

int main()
{
    int n, caseno = 0, cases, a;
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d", &n);
        int i, sum = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a);
            if (a > 0)
                sum = sum + a;
        }
        printf("Case %d: %d\n", ++caseno, sum);
    }
    return 0;
}

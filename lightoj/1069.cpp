#include <stdio.h>

main()
{
    int n, caseno = 0, cases, a, b, c;
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d %d", &a, &b);
        if (a > b)
            printf("Case %d: %d\n", ++caseno, a * 4 + (a - b) * 4 + 19);
        else
            printf("Case %d: %d\n", ++caseno, a * 4 + (b - a) * 4 + 19);
    }
}

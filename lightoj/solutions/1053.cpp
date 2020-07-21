#include <stdio.h>

main()
{
    int n, caseno = 0, cases, a, b, c;
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
            printf("Case %d: yes\n", ++caseno);
        else
            printf("Case %d: no\n", ++caseno);
    }
}

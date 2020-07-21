#include <stdio.h>
main()
{
    int i;
    int a, b, n;
    scanf("%d", &i);

    for (n = 1; n <= i; n++)
    {
        scanf("%d", &a);
        if (a > 10)
            printf("%d %d\n", 10, a - 10);
        else
            printf("%d %d\n", 0, a);
    }

    //&&&&dddd%%%%
}
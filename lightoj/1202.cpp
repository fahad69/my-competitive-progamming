#include <stdio.h>

main()
{
    int cases, c = 0;
    scanf("%d", &cases);
    int i, j = 0;
    for (i = 0; i < cases; i++)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        /*float a, b;
        a = (float)x2/x1;
        b = (float)y2/y1;
        if( a == b )
            printf("Case %d: 1\n", ++c);
        else if(y2==x1 && x2==y1)*/
        if (abs(y2 - y1) == abs(x2 - x1))
            printf("Case %d: 1\n", ++c);
        else if ((x1 + y1) % 2 == (x2 + y2) % 2)
            printf("Case %d: 2\n", ++c);
        else
            printf("Case %d: impossible\n", ++c);
    }
}

#include<stdio.h>
#include<string.h>
#include<math.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

main()
{
    int T, r, i, x;
    scanf("%d", &T);
    double ans, root;
    root = sqrt(2);
    root = root + 2;

    while(T--)
    {
        scanf("%d", &r);
        ans = root*r;
        printf("%.1lf\n", ans);
    }
}


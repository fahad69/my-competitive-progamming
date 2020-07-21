#include<stdio.h>
#include<string.h>
#include<math.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}


main()
{
    long long T, r, i, x, n, m, a, b, c, ans = 0;
    long long fb;
    scanf("%lld %lld", &n, &m);


    while(m--)
    {
        scanf("%lld %lld %lld", &a, &b, &c);
        ans += c;
    }

    printf("%lld", ans*2);
}


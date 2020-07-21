#include<stdio.h>
#include<string.h>
#include<math.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int fb[1000000];

long long fib(int n)
{
    if(n==1 || n==2)
    return 1;
    if(fb[n]) return fb[n];
    else
    return fb[n] = ( fib(n-1) + fib(n-2) )%(10000007);

}

main()
{
    int T, r, i, x;
    long long fb;
    scanf("%d", &T);

    //root = sqrt(2);
    //root = root + 2;

    while(T--)
    {
        double ans = 0, root, cnt = 0, pi = 3.141593;
        scanf("%d", &r);
        for(i = 1; i<=r; i++)
        {
            fb = fib(i);
            cnt = fb*fb*(1-pi/4.0);
            ans += cnt;

        }

        printf("%.2lf\n", ans);
    }
}


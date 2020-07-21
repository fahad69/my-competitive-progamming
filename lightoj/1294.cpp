#include <stdio.h>
#include <math.h>

main()
{
    //freopen("in.text", "r", stdin);
    //freopen("out.text", "w", stdout);
    int i = 0, cases;
    long long m, n;
    double sum = 0;
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%lld %lld", &m, &n);
        printf("Case %d: %lld\n", ++i, m * n / 2);
    }
}

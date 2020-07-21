#include <stdio.h>
#include <stdlib.h>

long long a, b, c, d, e, f;

long long arr[10005];

long long fn(long long n)
{
    if (n == 0)
        return arr[n] = a % 10000007;
    if (n == 1)
        return arr[n] = b % 10000007;
    if (n == 2)
        return arr[n] = c % 10000007;
    if (n == 3)
        return arr[n] = d % 10000007;
    if (n == 4)
        return arr[n] = e % 10000007;
    if (n == 5)
        return arr[n] = f % 10000007;
    if (arr[n] != 0)
        return arr[n];
    return arr[n] = ((fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6)) % 10000007);
}
int main()
{
    //freopen("in.txt", "r", stdin);
    long long n, caseno = 0, cases;
    scanf("%lld", &cases);
    while (cases--)
    {
        memset(arr, 0, sizeof(arr));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n));
        //printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, n);
    }
    return 0;
}

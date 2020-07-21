#include <bits/stdc++.h>

using namespace std;

long long mod_power(long long a, long long n, long long m)
{
    if(n == 0) return 1%m;

    long long temp = mod_power(a, n/2, m);
    temp = (temp*temp)%m;
    if(n%2 == 1)
        temp = (temp*a)%m;
    return temp;
}

long long norm_power(long long a, long long n)
{
    if(n == 0) return 1;

    long long temp = norm_power(a, n/2);
    temp = (temp*temp);
    if(n%2 == 1)
        temp = (temp*a);
    return temp;
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t ; ++i) {
        long long a, b, c, n;
        scanf("%lld %lld %lld", &a, &b, &n);
        printf("%lld\n", mod_power(a, b, n));


    }

    //(a/b) mod m = ( (a mod m)*(mod_power(b, m-2, m)) ) mod m
    //unsigned long long p2 = mod_power(2, d-2, d);




}


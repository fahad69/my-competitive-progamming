#include <bits/stdc++.h>

using namespace std;

long long mod_power(long long a, long long n)
{
	 long long m = 1000000007;
    if(n == 0) return 1%m;

    long long temp = mod_power(a, n/2);
    temp = (temp*temp)%m;
    if(n%2 == 1)
        temp = (temp*a)%m;
    return temp;
}

int main()
{
        long long a, n;
        scanf("%lld %lld %lld", &a, &n);
        printf("%lld\n", mod_power(a, n));




}


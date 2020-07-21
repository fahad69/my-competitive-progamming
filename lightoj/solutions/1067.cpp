#include <bits/stdc++.h>
using namespace std;

#define ll long long

int factorial[1000000];

void fact(void)
{
    factorial[0] = 1;
    for (long long i = 1; i <= 1000000; i++)
        factorial[i] = (factorial[i - 1] * i * 1LL) % 1000003;
}

ll power(ll a, ll b, ll mod)
{
    ll x = 1, y = a;
    while (b > 0)
    {
        if (b % 2)
        {
            x = (x * y) % mod;
        }
        y = (y * y) % mod;
        b /= 2;
    }
    return x % mod;
}

ll modular_inverse(ll n, ll mod)
{
    return power(n, mod - 2, mod);
}

ll C(ll n, ll r, ll MOD)
{
    return (factorial[n] * ((modular_inverse(factorial[r], MOD) * modular_inverse(factorial[n - r], MOD)) % MOD)) % MOD;
}

main()
{
    int n, ans, k, T, cases = 0;
    cin >> T;
    fact();

    while (T--)
    {
        cin >> n >> k;
        printf("Case %d: ", ++cases);
        cout << C(n, k, 1000003) << endl;
    }
}

#include <bits/stdc++.h>

using namespace std;

vector<pair<long long, long long>> give_factors(long long n)
{
    vector<pair<long long, long long>> f;

    if(n==1)
    {
        f.push_back(make_pair(1,1));
    }
    for(long long i = 2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            f.push_back(make_pair(i,0));
            while(n%i==0)
            {
                f[f.size()-1].second++;
                n = n/i;
            }
        }

    }

    if(n>1)
        f.push_back(make_pair(n, 1));
    return f;
}

long long mod_power(long long a, long long n)
{
    long long m = 10000000007;
    if(n == 0) return 1%m;

    long long temp = mod_power(a, n/2);
    temp = (temp*temp)%m;
    if(n%2 == 1)
        temp = (temp*a)%m;
    return temp;
}


int main()
{
    long long n;
    scanf("%lld", &n);

    for (long long i = 1; i <=n ; ++i) {
        long long x, k;
        scanf("%lld %lld", &x, &k);

        auto pp = give_factors(x);
        long long px = 1;
        for (long long j = 0; j <pp.size() ; ++j) {
            long long t1 = mod_power(pp[j].first,pp[j].second-1 );
            long long t2 = t1*(pp[j].first-1)%10000000007;
            px = (px%10000000007 * t2)%10000000007;
        }
        printf("%lld\n",  ((px)*(k-1)));
    }


    return 0;
}
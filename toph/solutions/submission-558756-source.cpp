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


int main()
{
    unordered_map<long long, long long> bucket;
    for (long long i = 2; i <=1000000 ; ++i)
    {
        for (long long j = 1;  j<25; ++j)
        {

            long long px = mod_power(i, j, 10000000000000);
            //cout<<px<<endl;
            if(px>1000000)
                break;
            else
            {
                if(bucket.find(px)==bucket.end())
                    bucket[px] = j;
            }
        }
    }

    //cout<<"hello";
    int n;
    scanf("%d", &n);

    for (long long j = 1; j <= n ; ++j) {
        long long a;
        long long b;
        scanf("%lld %lld", &a, &b);
        long long res1 = 1;
        if(bucket.find(a)!=bucket.end())
            res1 = (long long)bucket[a];
        long long res = res1*b;
        printf("Case #%lld: %lld\n", j, res);
    }

    return 0;
}
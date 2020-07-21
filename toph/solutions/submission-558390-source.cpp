#include <bits/stdc++.h>

using namespace std;


bool sieve[10001];

void generate(int n)
{
    sieve[1] = 1;
    for(int i = 2; i<=n; i++)
    {
        if(sieve[i]==0)
        {
            for (int j = 2*i; j <= n ; j=j+i) {
                sieve[j] = 1;
            }
        }

    }
}

int main()
{
    generate(10000);
    vector<int>primes;


    for (int i = 1; i<=10000 ; i++) {
        if(sieve[i] == 0)
            primes.push_back(i);
    }



    int n;
    scanf("%d", &n);

    for (int j = 0; j < n ; ++j) {
        int a, b;
        scanf("%d %d", &a, &b);

        vector<int>::iterator l1 = upper_bound(primes.begin(), primes.end(), b);
        int res = -1;
        if(l1 - primes.begin()-1<primes.size() && l1 - primes.begin()-1>=0)
            res = primes[l1- primes.begin()-1];
        if(res>=a)
            printf("%d\n", res);
        else
            printf("-1\n");
    }

    return 0;
}
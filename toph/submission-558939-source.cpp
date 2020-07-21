#include <bits/stdc++.h>

using namespace std;


bool sieve[8000000];

void generate(int n)
{
    sieve[0] = 1;
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
    int n;
    scanf("%d", &n);
    generate(1000000);
    set<int> primes;
    for (int j = 2; j <=26000 ; ++j) {
        if(sieve[j] == 0)
            primes.insert(j*j);
    }

    for (int i = 1; i<=n; i++) {
        int x;
        scanf("%d", &x);
        if(primes.find(x)!=primes.end())
            printf("YES.\n");
        else
            printf("NO.\n");



    }

    //cout<<endl;




    return 0;
}
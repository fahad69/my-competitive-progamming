#include <bits/stdc++.h>

using namespace std;


bool sieve[11000000];
int cnt[11000000];

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
    generate(10000000);
    int c = 0;
    for (int j = 0; j <= 10000000 ; j++) {
        cnt[j] = c;
        if(sieve[j] == 0)
            c++;

    }
    int n;
    scanf("%d", &n);

    for (int i = 1; i<=n ; i++) {
        int p;
        scanf("%d", &p);

        printf("%d\n", cnt[p]);



    }



    //cout<<primes[n-1];
    //cout<<endl;




    return 0;
}
#include <bits/stdc++.h>

using namespace std;

bool sieve[8000000];

void generate(int n)
{
    sieve[1] = 1;
    for(int i = 2; i*i<=n; i++)
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
    ios_base::sync_with_stdio(0);cin.tie(nullptr);

    generate(1000);
    vector<int> primes;
    for (int j = 1; j <=800 ; ++j) {
        if(sieve[j]==0)
        primes.push_back(j);
    }

    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;

        for (int j = 0; j <primes.size() ; ++j) {
            if(x==primes[j])
            {
                cout<<primes[j-1]<<" "<<primes[j+1]<<endl;
                break;
            }

            if(primes[j]<x && primes[j+1]>x)
            {
                cout<<primes[j]<<" "<<primes[j+1]<<endl;
                break;
            }
        }

    }

    return 0;
}
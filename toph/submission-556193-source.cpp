#include <bits/stdc++.h>

using namespace std;


bool sieve[8000000];

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
    int n;
    cin>>n;
    generate(7500000);
    vector<int>primes;

    for (int i = 1; ; i++) {
        if(sieve[i] == 0)
            primes.push_back(i);

        if(primes.size()==n)
            break;
    }



    cout<<primes[n-1];
        //cout<<endl;




    return 0;
}
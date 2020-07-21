#include <bits/stdc++.h>

using namespace std;


bool sieve[100000007];

void generate(int n)
{
    sieve[1] = true;
    for(int i = 2; i*i<=n; i++)
    {
        if(sieve[i]==0)
        {
            for (int j = 2*i; j <= n ; j=j+i) {
                sieve[j] = true;
            }
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    int n;
    cin>>n;
    generate(100000001);
    vector<long long>primes;
    long long sum = 0;
    primes.push_back(sum);
    for (int i = 1; i<=100000000; i++) {
        if(sieve[i] == 0)
        {
            sum += i;
            primes.push_back(sum);

        }
    }

    for (int j = 0; j < n; ++j) {
        int a, b;
        cin>>a>>b;
        cout<<primes[b]-primes[a-1]<<"\n";
    }

    //cout<<primes.size();


    //cout<<endl;




    return 0;
}
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

    generate(10000);
    vector<int>primes;

    for (int k = 1; k < 10000; ++k) {
        if(sieve[k]==0)
            primes.push_back(k);
    }

    int t;
    cin>>t;
    for (int i = 1; i <= t ; ++i) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int flag = 0;

        for (int k = primes.size()-1; k >= 0 ; k--) {
            int the_prime = primes[k];

            string sss = to_string(the_prime);
            if(s.find(sss)!=string::npos)
            {
                flag = 1;
                printf("Case %d: %d\n", i, the_prime);
                break;
            }
        }

        if(flag==0)
            printf("Case %d: This is a junk!\n", i);


    }




}
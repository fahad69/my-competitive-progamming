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
    generate(1005);
    int t;
    cin>>t;

    if(sieve[t]==0)
        cout<<"NO PUNISHMENT";
    else
    {
        for (int i = 0; i < t; ++i) {
            cout<<"I DID NOT DO THE ASSIGNMENT.\n";
        }

    }


}
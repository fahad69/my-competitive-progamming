
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


int main() {

    //freopen("out.txt", "r", stdin);

    generate(1001);

    int t, c = 0;
    cin>>t;
    for (int i = 0; i < t ; ++i) {
        int x;
        cin>>x;
        if(sieve[x]==0)
            c++;
    }

    cout<<min(c, t/2);


    return 0;
}
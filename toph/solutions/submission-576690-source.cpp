#include<bits/stdc++.h>

using namespace std;

#define M 1000000007

long long factorials[2001];

void generate_factorials()
{
    factorials[0] = 1;
    for (long long i = 1; i <=2000 ; ++i) {
        factorials[i] = (factorials[i-1]%M*i)%M;
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    generate_factorials();
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int p;
        cin>>p;
        if(p<4)
            cout<<1<<endl;
        else
        {
            /*int n_odd;
            
            if(p%2==0)
                n_odd = p/2;
            else
                n_odd = p/2+1;
            */
            int n_even = p/2;
            long long res = (factorials[n_even] * factorials[n_even+1])%M;
            cout<<res-1<<endl;
        }
    }
    
    return 0;
}


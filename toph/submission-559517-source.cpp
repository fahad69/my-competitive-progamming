#include<bits/stdc++.h>

using namespace std;

long long mod_power(long long a, long long n, long long m)
{
    if(n == 0) return 1%m;

    long long temp = mod_power(a, n/2, m);
    temp = (temp*temp)%m;
    if(n%2 == 1)
        temp = (temp*a)%m;
    return temp;
}

int main() {

    unsigned long long n;
    scanf("%lld", &n);
    for (int i = 1; i <= n ; ++i) {
        unsigned long long l, r;
        scanf("%lld %lld", &l, &r);
        l = l - 1;
        if(l%2==0)
            l = l/2;
        else
            l = l/2 + 1;

        if(r%2==0)
            r = r/2;
        else
            r = r/2 + 1;

        printf("Case %d: %lld\n",i,  r*r-l*l);
    }
}



/*int t;
    cin>>t;
    for (int i = 1; i <=t ; ++i) {
        int n;
        cin>>n;
        double sum = 0;
        for (int j = 0; j < n; ++j) {
            double x;
            cin>>x;
            sum+=x;
        }
        printf("Case %d: %.3lf\n", i, (double)sum/n);
    }*/
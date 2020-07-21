#include <bits/stdc++.h>

using namespace std;

unsigned long long mod_power(unsigned long long a,unsigned  long long n)
{
    unsigned long long m = 1000003;
    if(n == 0) return 1%m;

    unsigned long long temp = mod_power(a, n/2);
    temp = (temp*temp)%m;
    if(n%2 == 1)
        temp = (temp*a)%m;
    return temp;
}


int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <=n ; ++i) {
        unsigned long long a, r, n;
        scanf("%llu %llu %llu", &a, &r, &n);
        unsigned long long xx = mod_power(r, n);
        //cout<<xx<<endl;
        xx--;
        xx = (xx*a%1000003)%1000003;
        //cout<<xx<<endl;
        r--;
        r = mod_power(r, 1000003 - 2 );
        xx = (xx*r)%1000003;
        printf("%llu\n", xx);
    }


    return 0;
}
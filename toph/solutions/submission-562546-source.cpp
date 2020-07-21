
#include <bits/stdc++.h>

using namespace std;

long long mod_power(long long a, long long n)
{
    if(n == 0) return 1;

    long long temp = mod_power(a, n/2);
    temp = (temp*temp);
    if(n%2 == 1)
        temp = (temp*a);
    return temp;
}


int main() {
    long long t;
    cin>>t;
    for (int i = 1; i<=t ; ++i) {

        long long n, sum = 1;
        cin>>n;
        for (int j = 0; j < n; ++j) {
            long long digits, k, total, needed;
            cin>>digits>>k;
            total = mod_power(10, digits);
            needed = (total)/(2*k+1);
            if((total)%(2*k+1)!=0)
                needed++;
            needed = max(1LL, needed);
            sum = (sum%1000000007*needed%1000000007)%1000000007;
        }

        printf("Case %d: %lld\n", i, sum);
    }

    return 0;
}
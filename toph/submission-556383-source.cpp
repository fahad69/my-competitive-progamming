#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    if( b==0 )
        return a;
    return gcd(b, a%b);
}

int main()
{
    /*int t;
    scanf("%d", &t);
    for (int i = 0; i < t ; ++i) {
        long long a, b;

        scanf("%lld %lld", &a, &b);
        printf("%lld\n", gcd(a, b));
    }*/

    long long n, a, b;
    cin>>n>>a>>b;
    long long a_b = a+b;
    long long n_a = (n*a)/a_b;
    long long n_b = (n*b)/a_b;
    cout<<n_a<<" "<<n_b;


}


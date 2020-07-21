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

    int n;
    cin>>n;
    cout<<(n*(n+1)/2);


}


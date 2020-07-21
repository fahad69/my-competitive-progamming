#include <bits/stdc++.h>

using namespace std;

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
    if( b==0 )
        return a;
    return gcd(b, a%b);
}


int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t ; ++i) {
        long long n, b;
        cin>>n>>b;
        cout<<gcd(n,b)<<endl;
    }
    return 0;
}
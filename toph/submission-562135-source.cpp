#include <bits/stdc++.h>

using namespace std;


long long gcd(long long a, long long b)
{
    if( b==0 )
        return a;
    return gcd(b, a%b);
}

long long lcm(long long a, long long b)
{
    return (a*b)/gcd(a,b);
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;
    int res = (t*(t+1))/2;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        res -= x;
    }

    cout<<res;





    return 0;
}
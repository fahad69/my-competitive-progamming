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

    for (int i = 0; i < t; ++i) {
    
        long long x;
        cin>>x;
        double ans = (sqrt(1+8*x) - 1)/2.0;
        long long ans2 = ans;
        if(ans2%2==1)
            cout<<"Aminul\n";
        else
            cout<<"Imran\n";
    }
    



    return 0;
}
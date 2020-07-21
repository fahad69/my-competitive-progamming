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

    long long n;
    cin>>n;
    cout<<mod_power(15, n, 100);
    return 0;
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
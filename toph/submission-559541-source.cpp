#include<bits/stdc++.h>

using namespace std;

int main() {

    unsigned long long n;
    scanf("%lld", &n);
    for (int i = 1; i <= n ; ++i) {
        unsigned long long l, r;
        scanf("%lld %lld", &l, &r);
        
        if(__gcd(l,r) == 1)
            cout<<"yes\n";
        else
            cout<<"no\n";
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
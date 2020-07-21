#include<bits/stdc++.h>

using namespace std;

int main() {

    long long n;
    scanf("%lld", &n);
    if(n>0)
    {
        printf("0");
        for (int i = 1; i <=n ; ++i) {
            cout<<" "<<i;
        }
    }
    else
    {
        printf("%lld", n);
        for (long long i = n+1;  ; ++i) {
            if(i>0)
                break;
            printf(" %lld", i);
        }
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
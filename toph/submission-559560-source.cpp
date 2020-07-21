#include<bits/stdc++.h>

using namespace std;

int main() {
    //freopen("out.txt", "r", stdin);

    int t;
    cin>>t;
    for (int i = 1; i <=t ; ++i) {
        long long x;
        cin>>x;
        long long p = 0, T = 1;
        printf("Case %d:\n",i);
        for (int j = 1; j <= x; ++j) {

            printf("Day = %d, New = %lld, Total = %lld\n", j, p, T );
            p = T*2;
            T += p;
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
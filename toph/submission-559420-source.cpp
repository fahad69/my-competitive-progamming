#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;
    for (int i = 1; i <=t ; ++i) {
        int p, k, d;
        cin >> p >> k >>d;
        int p1 = p;
        p = 0;
        int ans = 0;
        
        ans = (k/d + 1)*d + p1;

        printf("Case %d: %d\n",i, ans);

    }









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
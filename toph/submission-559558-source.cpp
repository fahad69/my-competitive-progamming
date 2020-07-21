#include<bits/stdc++.h>

using namespace std;

int main() {
    //freopen("out.txt", "r", stdin);

    int t;
    cin>>t;
    for (int i = 1; i <=t ; ++i) {
        int n;
        cin>>n;
        
        printf("Case %d: %d\n", i, (n*(n*n+1))/2);
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
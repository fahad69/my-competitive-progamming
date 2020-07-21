#include<bits/stdc++.h>

using namespace std;

int cnt = 0;


int main() {

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        long long n, x;

        cin>>n>>x;
        cout<<n*x<<"\n";
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
#include<bits/stdc++.h>

using namespace std;

int main() {

    unsigned long long n;
    cin>>n;
    if(n%2==0)
        cout<<n/2;
    else
        cout<<n/2+1;
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
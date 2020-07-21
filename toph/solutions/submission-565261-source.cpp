#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        double prod = 1.0;
        for (int j = 0; j < n; ++j) {
            double x;
            cin>>x;
            prod = prod*x;
        }
        cout<<setprecision(5)<<fixed<<1.0-prod<<endl;
    }

    return 0;
}
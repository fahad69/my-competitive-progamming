#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;
    for (int i = 1; i <=t ; ++i) {
        int a, b;
        cin >> a >> b;

        printf("Case %d: %d%d\n",i, a + b, a - b);

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
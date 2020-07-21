#include<bits/stdc++.h>

using namespace std;

int main() {

    unsigned long long n, total = 0, sum = 0;
    scanf("%lld", &n);
    vector<long long> accepted;
    for (int i = 1; i <= n ; ++i) {
        unsigned long long m, s;
        scanf("%lld %lld", &m, &s);

        sum += m;

        if(m>=150 && ((double)m/s)*100>=70.0)
            accepted.push_back(m);
        //cout<<(double)m/s<<endl;
    }

    double  average = (double)sum/n;
    for (int j = 0; j < accepted.size(); ++j) {
        //cout<<"hello";
        if(accepted[j]>=average)
            total++;
    }

    cout<<total;
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
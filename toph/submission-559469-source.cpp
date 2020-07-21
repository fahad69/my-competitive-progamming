#include<bits/stdc++.h>

using namespace std;

int cnt = 0;


int main() {

    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        long long a, b, c;
        cin >> a >> b >> c;
        vector<pair<long long, string>> pp;
        pp.emplace_back(a, "A");
        pp.emplace_back(b, "B");
        pp.emplace_back(c, "C");
        sort(pp.begin(), pp.end());

        if (pp[2].first == pp[1].first)
            printf("Case %d: Confused\n", i);
        else {
            printf("Case %d: ", i);
            cout << pp[2].second << "\n";
        }

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
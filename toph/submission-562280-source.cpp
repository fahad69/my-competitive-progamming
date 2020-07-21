
#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;

    vector<pair<string, long long>> pp;
    for (int i = 0; i < n; ++i) {
        string s;
        cin>>s;
        long long x;
        cin>>x;
        pp.emplace_back(s,x);
    }

    long long target;
    cin>>target;

    for (int j = n-1; j >=0 ; j--) {
        string p = pp[j].first;
        long long tt = pp[j].second;
        if(p=="multiply")
            target = target/tt;
        if(p=="add")
            target = target-tt;
        if(p=="subtract")
            target = target+tt;
        if(p=="divide")
            target = target*tt;
    }
    cout<<target;

    return 0;
}
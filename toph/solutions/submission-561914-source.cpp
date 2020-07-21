#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);

    vector<long long> pp;
    double x = acos(-1.0);
    long long p = x*1000000000000;
    while(p)
    {
        pp.push_back(p%10);
        p = p/10;
    }

    reverse(pp.begin(), pp.end());
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int xx;
        cin>>xx;
        cout<<pp[xx]<<endl;
    }


}
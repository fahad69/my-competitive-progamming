#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, x;
    long long sum = 0;
    cin>>t>>x;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        sum += n%x;
    }
    cout<<sum<<endl;
    return 0;
}


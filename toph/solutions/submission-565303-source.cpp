#include <bits/stdc++.h>
using namespace std;
vector<int> box;


int main()
{

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        
        int mx = 0;
        for (int j = 0; j < n; ++j) {
            int x;
            cin>>x;
            x = abs(x);
            mx = max(x,mx);
        }
        printf("Case %d: %d\n", i+1, mx);
    }
    return 0;
}
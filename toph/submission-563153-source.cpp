#include <bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    cin>>n;

    int mx = -1;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        int res = 20*arr[i] - x*10;
        mx = max(mx, res);
    }

    cout<<max(mx,0);
    return 0;

}


#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin>>n>>k;

    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    int r = k - 1, mn = INFINITY;
    for (int j = 0; ; ++j) {
        if(r==n)
            break;
        mn = min(arr[r]-arr[j], mn);
        r++;
    }

    cout<<mn;

    return 0;
}
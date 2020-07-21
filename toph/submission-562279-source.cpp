
#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;
    int arr[n];
    int x, d;
    cin>>x>>d;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int px; cin>>px;
        arr[i] = px;

    }

    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 0; j < i ; ++j) {
            arr[j] = max(0, arr[j] - d);
            sum += arr[j];
        }
        sum += arr[i];
        if(sum>=x)
        {
            cout<<i+1;
            return 0;
        }
    }

    return 0;
}
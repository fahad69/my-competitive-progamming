#include <bits/stdc++.h>
using namespace std;
int main()
{

    priority_queue<int> q2;


    int n;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int k;
            cin>>k;
            a[i][j] = k;
        }
    }

    for (int l = 0; l < n; ++l) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; ++i) {
            sum1 += a[l][i];
            sum2 += a[i][l];
        }
        q2.push(sum1);
        q2.push(sum2);
    }

    int ss = 0, ss2 = 0;
    for (int m = 0; m < n; ++m) {
        ss += a[m][m];
        ss2 += a[m][n-m-1];
        //cout<<a[m][n-m-1]<<endl;
    }

    q2.push(ss);
    q2.push(ss2);

    cout<<q2.top();

    return 0;
}
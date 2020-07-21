#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

long long binarySearch(long long l, long long r, long long x)
{
    while (l < r) {
        long long m = (l + r) / 2;
        cnt++;

        if (x > m)
            l = m + 1;
        else
            r = m ;
    }

    return -1;
}


int main() {

    long long n, x;

    cin>>n>>x;

    binarySearch(1, n, x);

    cout<<cnt;






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
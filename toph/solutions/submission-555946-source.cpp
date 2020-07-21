#include <bits/stdc++.h>

using namespace std;



int main()
{

    long long n;
    cin>>n;

    long long a[n];
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n ; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }

    cout<<a[n];


    return 0;
}
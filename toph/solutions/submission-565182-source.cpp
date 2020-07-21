#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin>>t;
    long long a = 1, d = 4, sum;
    for (int i = 1; i <= t; ++i) {
        long long n;
        cin>>n;

        sum = (n*(2+(n-1)*4))/2;
        cout<<sum<<endl;

    }

    return 0;
}
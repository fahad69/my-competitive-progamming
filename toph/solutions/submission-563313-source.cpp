#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, k, ma, mb;
    cin>>a>>b>>k;
    ma = max(a, b);
    mb = min(a, b);

    long long diff = ma - mb;
    if(diff>=k)
    {
        mb = mb + k;
        cout<<ma*mb;
    } else{
        mb = mb + diff;
        k = k - diff;
        long long p1 = k/2, p2 = k - p1;
        mb = mb + p1;
        ma = ma + p2;
        cout<<ma*mb;
    }

    return 0;
}


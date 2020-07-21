#include <bits/stdc++.h>

using namespace std;

long long maxx(long long a, long long b)
{
    if (a>b)
        return a;
    else
        return b;
}


long long minn(long long a, long long b)
{
    if (a<b)
        return a;
    else
        return b;
}

int main()
{

    long long a, b;
    cin>>a>>b;
    cout<<maxx(a,b);
    return 0;
}
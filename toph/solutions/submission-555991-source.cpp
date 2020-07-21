#include <bits/stdc++.h>

using namespace std;

int powr(int n)
{
    if(n==0)
        return 1;
    int p = 2;
    for (int i = 1; i < n; ++i) {
        p = p*2;
    }

    return p;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    cin>>n;

    cout<<powr(n-1);


    return 0;
}
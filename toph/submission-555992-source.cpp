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
    int k = 1;
    int c = 0;
    for (int i = 0; i < 32 ; ++i) {
        if(k&n)
            c++;
        k = k<<1;
    }

    //cout<<c;

    cout<<powr(c)-1;


    return 0;
}
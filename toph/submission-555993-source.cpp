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
    int c = 0;
    int a, b;
    cin>>a>>b;
    int arr[n];
    for (int i = 0; i < n ; ++i) {
        int x;
        cin>>x;
        arr[i] = x;
    }

    for (int j = a; j <=b ; ++j) {
        c += arr[j];
    }

    cout<<c;

    //cout<<c;

    //cout<<powr(c)-1;


    return 0;
}
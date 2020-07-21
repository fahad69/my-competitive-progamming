#include <bits/stdc++.h>

using namespace std;



int main()
{
    //freopen("in.txt", "r", stdin);
    int n, m;
    cin>>n>>m;
    if(m%n==0)
        cout<<0;
    else
    {
        if(m<n)
            cout<<n-m;
        else
        {
            int p = ((m/n)+1)*n - m;
            cout<<p;
        }
    }



    return 0;
}
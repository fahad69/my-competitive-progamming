#include <bits/stdc++.h>

using namespace std;

void isprime(int n)
{
    int p = n;
    if(n==1)
    {
        cout<<"No";
        return;
    }
    for(int i = 2; i<=p/2; i++)
    {
        if(n%i==0)
        {
            cout<<"No";
            return;
        }
    }

    cout<<"Yes";
}



int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    cin>>n;
    isprime(n);


    return 0;
}
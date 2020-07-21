#include <bits/stdc++.h>

using namespace std;

int fibonacci[100001];
void fib(int n)
{
    int f1 = 0, f2 = 1, f_new = 0;
    fibonacci[0] = 1, fibonacci[1] = 1;
    while(true)
    {
        f_new = f2 + f1;
        if(f_new>n)
            break;
        fibonacci[f_new] = 1;
        //cout<<f_new<<endl;
        f1 = f2;
        f2 = f_new;

    }
}

int main()
{
    fib(100000);
    int t;
    cin>>t;
    for (int i = 1; i <= t ; ++i) {
        int n;
        cin>>n;
        if(fibonacci[n])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
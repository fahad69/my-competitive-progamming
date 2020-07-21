#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n, k;
        cin>>n>>k;
        int flag = 1<<31;
        flag--;
        for (int j = 0; j < n; ++j) {
            int a;
            cin>>a;
            flag = flag&a;
        }
        if(flag<k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
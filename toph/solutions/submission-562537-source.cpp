#include <bits/stdc++.h>

using namespace std;

int give_red(int x)
{
    if(x%2==0)
        return x/2;
    else
        return x/2+1;
}

int give_green(int x)
{
    return x/2;
}

int main() {


    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n, m;
        cin>>n>>m;
        for (int j = 0; j < m; ++j) {
            int p,q;
            cin>>p>>q;

            cout<<give_red(q)-give_red(p-1)<<" ";
            cout<<give_green(q)-give_green(p-1)<<endl;

        }
    }



    return 0;
}
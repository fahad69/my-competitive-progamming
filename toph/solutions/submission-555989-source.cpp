#include <bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    cin>>n;

    for (int i = 1; i <= n ; ++i) {
        for (int k = 1; k <(n-i+1); ++k) {
            cout<<" ";}
        for (int j = 1; j <= i ; ++j) {
            cout<<"*";
            if(j!=0 && j!=i)
                cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}
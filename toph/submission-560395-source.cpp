#include <bits/stdc++.h>

using namespace std;



int main() {
    //freopen("out.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        if(x==1971)
            cout<<"Joy Bangla\n";
        else if(x%2==0)
            cout<<"Bangla\n";
        else
            cout<<"Joy\n";
    }


    return 0;
}
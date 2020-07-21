
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("out.txt", "r", stdin);


    long long t;
    cin>>t;
    t = t*(t+1);
    t = t/2;
    int q;
    cin>>q;
    for (int i = 1; i<=q ; ++i) {
        long long n;
        cin>>n;
        t=t-n;
    }
    cout<<t;



    return 0;
}
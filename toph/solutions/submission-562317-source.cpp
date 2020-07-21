
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("out.txt", "r", stdin);


    long long t;
    cin>>t;
    for (int i = 1; i<=t ; ++i) {
        long long n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else if(n%2==0)
            cout<<-(n/2)<<endl;
        else
            cout<<-(n/2)+1<<endl;
    }



    return 0;
}
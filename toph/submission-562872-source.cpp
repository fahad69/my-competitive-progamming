#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int q;
    cin>>q;
    int a[100009];
    for (int i = 1; i <= t; ++i) {
        cin>>a[i];
    }


    for (int j = 0; j < q; j++) {
        int l, r, target;
        int flag = 0;
        cin>>l>>r>>target;
        for (int i = l; i <=r ; i++) {
            if(a[i]==target)
            {
                //cout<<"found"<<a[i]<<endl;
                flag = 1;
                break;
            }
        }

        if(flag==0)
            cout<<"NO";
        else
            cout<<"YES";

        if(j!=q-1)
            cout<<"\n";
    }

    return 0;
}


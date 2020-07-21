#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int k;
        cin>>k;

        cout<<"   ";

        for (int j = 0; j < k; ++j) {
            cout<<"##########";
            if(j!=k-1)
                cout<<" ";
        }

        cout<<endl;
        cout<<"  ";
        for (int j = 0; j < k; ++j) {
            cout<<"#        #";
            if(j!=k-1)
                cout<<" ";
        }
        cout<<endl;
        cout<<" ";
        for (int j = 0; j < k; ++j) {
            cout<<"#        #";
            if(j!=k-1)
                cout<<" ";
        }

        cout<<endl;

        for (int j = 0; j < k; ++j) {
            cout<<"##########";
            if(j!=k-1)
                cout<<" ";
        }

        cout<<endl;

    }


    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    int t, c = 0;
    cin>>t;


    for (int i = 0; i < t; ++i) {
        int a, b, c;
        char ch;
        cin>>a>>ch>>b>>ch>>c;

        if(b==115)
            cout<<"CSE";
        if(b==141)
            cout<<"EEE";
        if(b==116)
            cout<<"BBA";
        if(b==117)
            cout<<"LLB";
        if(b==114)
            cout<<"English";
        if(b==111)
            cout<<"Economics";

        if(a%10==1)
            cout<<" Spring ";
        else if(a%10==2)
            cout<<" Summer ";
        else if(a%10==3)
            cout<<" Autumn ";

        cout<<20;
        if(a/10<10)
            cout<<0;
        cout<<a/10<<endl;
    }



}
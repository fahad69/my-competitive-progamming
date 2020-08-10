#include<bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int t;
    cin>>t;
    for (int i = 1; i <= t ; ++i)
    {
        int n;
        cin>>n;
        int p = n/100;
        p = p + 1;
        cout<<"Case #"<<i<<": ";
        if((n%100)==0)
            p = p - 1;
        cout<<p;
        if(p%10==1 && p>20)
            cout<<"st";
        else if(p%10==2 && p>20)
            cout<<"nd";
        else if(p%10==3 && p>20)
            cout<<"rd";
        else
            cout<<"th";
        cout<<" century!\n";
    }
    
    return 0;
}


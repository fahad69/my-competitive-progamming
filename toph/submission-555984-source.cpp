#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first)
        return a.second>b.second;
    return a.first<b.first;
}



int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    cin>>n;
    for (int i = 0; i < n ; ++i) {
        int x, y;
        cin>>x>>y;
        //cout<<x<<y<<endl;
        int p = (x+y)/2;
        //cout<<p<<" ";
        if(p%2==0)
            cout<<"Sadia will be happy.\n";
        else
            cout<<"Oops!\n";
    }


    return 0;
}
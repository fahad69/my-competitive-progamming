
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second==p2.second)
        return p1.first<p2.first;
    return p1.second>p2.second;
}

int main()
{

    int n;
    cin>>n;
    string pp = "";
    for (int i = 0; i < n; ++i) {
        string s;
        cin>>s;
        pp += s;
    }

    int t;
    cin>>t;
    int danger = 0;
    vector<int> infected;
    for (int j = 0; j < t; ++j) {
        int xx;
        cin>>xx;
        if(pp[xx-1]=='c')
            danger = 1;
        if(danger == 1 && pp[xx-1]=='a')
            infected.push_back(xx);
    }

    if(danger==0)
        cout<<"NO";
    else
    {
        cout<<"YES\n";
        for (int i = 0; i < infected.size(); ++i) {
            cout<<infected[i]<<" ";
        }
    }

    return 0;
}
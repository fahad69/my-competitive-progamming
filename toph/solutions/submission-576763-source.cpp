#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<string ,int> p1, pair<string ,int> p2)
{
    return p1.second>p2.second;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        vector<pair<string ,int>> pp;
        for (int j = 0; j < 5; ++j)
        {
            string s;
            cin>>s;
            int c;
            cin>>c;
            pp.emplace_back(s,c);
        }
        
        sort(pp.begin(), pp.end(), cmp);
        cout<<"Case "<<i+1<<": "<<pp[0].first<<endl;
    }
    
    return 0;
}


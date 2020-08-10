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
        int n;
        cin>>n;
        string ans;
        for (int j = 0; j < n; ++j)
        {
            string s;
            cin>>s;
            for (int k = 0; k < s.length(); ++k)
            {
                s[k]=tolower(s[k]);
            }
            ans += s;
        }
        cout<<ans<<endl;
    }
    
      return 0;
}


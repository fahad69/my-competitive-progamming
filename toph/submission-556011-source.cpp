#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, y;
    cin>>n;
    int mx = -1;
    vector<pair<string,int>> goats;

    for (int i = 0; i < n; ++i) {
        string s;
        cin>>s;
        int count = 0;
        for (int j = 0; j < s.length() ; ++j) {
            if(s[j] == 'a')
                count++;
        }

        if(count==1)
        {
            s = s + 'a';
            goats.push_back(make_pair(s, count));
        }
        else if(count%2!=0)
        {
            s.erase(s.begin()+s.length()-1);
            goats.push_back(make_pair(s, count));
        }
        else
        {
            goats.push_back(make_pair(s, count));
        }
        //cout<<s;
        mx = max(mx, count);
    }

    if(mx%2==0)
    {
        mx++;
    }
    else
    {
        if(mx==1)
            mx = 3;
        else
            mx = mx + 1;
    }

    for (int k = 0; k < n ; ++k) {
        int times = mx - goats[k].first.size();
        for (int i = 0; i < times/2; ++i) {
            printf(" ");
        }
        cout<<goats[k].first;
        if(k!=n-1)
            cout<<endl;
    }

    return 0;
}
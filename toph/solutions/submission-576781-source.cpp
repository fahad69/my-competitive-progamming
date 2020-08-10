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
        int n, k;
        cin>>n>>k;
        vector<int> pp;
        int value = -1;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin>>x;
            if(j+1==k)
            {
                value = x;
            }
            else
                pp.push_back(x);
        }
        
        sort(pp.begin(), pp.end());
        for (int j = 0; j < pp.size(); ++j)
        {
            if(j+1==k)
            {
                cout<<value;
                if(k!=n)
                    cout<<" ";
            }
            cout<<pp[j];
            if(j+1!=n-1)
                cout<<" ";
        }
        if(k==n)
        {
            if(n!=1)
                cout<<" "<<value;
            else
                cout<<value;
        }
        
        cout<<endl;
    }
    
    return 0;
}


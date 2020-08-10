#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int T;
    cin >> T;
    vector<int> pp, pp2;
    for (int i = 1; i <= T; ++i)
    {
        int x;
        cin>>x;
        pp.push_back(x);
    }
    for (int i = 1; i <= T; ++i)
    {
        int x;
        cin>>x;
        pp2.push_back(x);
    }
    
    sort(pp.begin(), pp.end());
    sort(pp2.begin(), pp2.end());
    
    for (int i = 0; i < T; ++i)
    {
        cout<<pp2[i]+pp[T-i-1];
        if(i!=T-1)
        cout<<" ";
    }
    
    return 0;
}



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

    int n, k;
    cin>>n>>k;
    int a[101] ={0};
    vector<pair<int, int>>pp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        a[x]++;
    }

    for (int j = 1; j <=100 ; ++j) {
        if(a[j]>0)
        {
            pp.emplace_back(j, a[j]);
        }
    }
    
    sort(pp.begin(), pp.end(), cmp);

    cout<<pp[0].first;
    
    return 0;
}
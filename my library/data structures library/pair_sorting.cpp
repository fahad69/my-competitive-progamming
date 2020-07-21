#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first)
        return a.second<b.second;
    return a.first<b.first;
}

int main() {

    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for (int i = 0; i < n ; ++i) {
        int x, y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }

    sort(a.begin(), a.end(), cmp);
    
    for (int j = 0; j < n; ++j) {
        
        cout<<a[j].first<<" "<<a[j].second<<endl;
    }
    

    return 0;
}
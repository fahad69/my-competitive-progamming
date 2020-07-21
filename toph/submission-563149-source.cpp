#include <bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    cin>>n;
    unordered_map<long long, vector<int>> umap1;
    umap1[-2] = {-2};

    for (int i = 1; i <= n; ++i) {
        long long x;
        cin>>x;
        auto pp = umap1.find(x);
        if(pp==umap1.end())
        {
            umap1[x] = {i};
        }
        else
        {
            pp->second.push_back(i);
        }
    }

    int mx = 0;

    for(auto i: umap1)
    {
        int diff = i.second[i.second.size()-1] - i.second[0];
        mx = max(diff, mx);
    }

    cout<<mx+1;


    return 0;

}


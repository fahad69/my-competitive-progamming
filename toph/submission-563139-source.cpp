#include <bits/stdc++.h>

using namespace std;


int main()
{

    int n, m, k;
    cin>>n>>m>>k;
    unordered_map<int, int> umap1;
    unordered_map<int, int> umap2;
    umap1[-2] = -2;
    umap2[-2] = -2;

    int zero1=0, zero2=0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        x = x%k;
        if(x==0)
        {
            zero1++;
            continue;;
        }
        auto pp = umap1.find(x);
        if(pp==umap1.end())
        {
            umap1[x] = 1;
        }
        else
            pp->second++;
    }

    for (int i = 0; i < m; ++i) {
        int x;
        cin>>x;
        x = x%k;
        if(x==0)
        {
            zero2++;
            continue;;
        }
        auto pp = umap2.find(x);
        if(pp==umap2.end())
        {
            umap2[x] = 1;
        }
        else
            pp->second++;
    }

    int ans = min(zero1, zero2);

    if(umap1.size()<umap2.size())
    {
        for (auto i:umap1) {
            auto test = umap2.find(k-i.first);
            if(test==umap2.end())
                continue;
            else
            {
                ans += min(i.second, test->second);
            }
        }
    } else
    {
        for (auto i:umap2) {
            auto test = umap1.find(k-i.first);
            if(test==umap1.end())
                continue;
            else
            {
                //cout<<
                ans += min(i.second, test->second);
            }
        }

    }

    cout<<ans;

    return 0;

}


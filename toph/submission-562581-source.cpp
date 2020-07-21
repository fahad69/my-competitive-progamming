#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    unordered_map<int, int> umap;

    for (int i = 0; i < t; ++i) {
        int x;
        cin >> x;
        if (i == 0) {
            umap[x] = 1;
            continue;
        }
        if (umap.find(x) == umap.end()) {
            umap[x] = 1;
        } else {
            umap.find(x)->second++;
        }

    }

    int q;
    cin>>q;
    for (int j = 0; j < q; ++j) {
        int id;
        cin>>id;
        if(umap.find(id) != umap.end())
        {
            if(umap.find(id)->second>=2)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        } else
            cout<<"No\n";
    }



    return 0;
}



#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("out.txt", "r", stdin);
    string s;
    vector<string> pp;
    while (cin>>s)
    {
        pp.push_back(s);
    }

    unordered_map<string, int> umap;

    for (int i = 0; i < pp.size(); ++i) {
        string ss = pp[i];
        if(i==0)
        {
            umap[ss] = 1;
            continue;
        }
        if(umap.find(ss)==umap.end())
        {
            umap[ss] = 1;
        } else
        {
            umap.find(ss)->second++;
        }


    }

    string ans;
    int res = -1;
    for (auto x : umap)
    {
        if(x.second>res)
        {
            res = x.second;
            ans = x.first;
        }
    }

    cout<<ans;







    return 0;
}
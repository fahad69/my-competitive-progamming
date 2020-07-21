#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2)
{
    if(p1.second==p2.second)
        return p1.first<p2.first;
    return p1.second>p2.second;
}

int main()
{

    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin>>n;
        vector< pair<string, int> > pp;
        for (int j = 0; j < n; ++j) {
            int rating;
            string name;
            cin>>name>>rating;
            pp.emplace_back(name, rating);
        }

        sort(pp.begin(), pp.end(), cmp);

        cout<<pp[0].first<<endl;
    }
    return 0;

}


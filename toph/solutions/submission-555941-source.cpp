#include <bits/stdc++.h>

using namespace std;



int main()
{

    int n, m;
    cin>>n>>m;
    set<int> set1;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        set1.insert(x);
    }
    for (int j = 0; j < m ; ++j) {
        int x;
        cin>>x;
        set1.insert(x);
    }

    vector<int> ab;
    for (auto i: set1) {
        ab.push_back(i);
    }

    for (int k = 0; k < ab.size() - 1 ; ++k) {
        cout<<ab[k]<<" ";
    }
    cout<<ab[ab.size() - 1];


    return 0;
}
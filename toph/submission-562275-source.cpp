
#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;

    int k;
    cin>>k;

    vector<int> pp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin>>x;
        pp.push_back(x);
    }

    sort(pp.begin(), pp.end());

    

    cout<<pp[pp.size()-k];


        return 0;
    }
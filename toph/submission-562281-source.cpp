
#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int t;
        cin>>t;
        vector<int> pp;
        for (int j = 0; j < t; ++j) {
            int xx;
            cin>>xx;
            pp.push_back(xx);
        }
        
        sort(pp.begin(), pp.end());
        
        cout<<pp[pp.size()-1]-pp[0]<<endl;
    }

    return 0;
}
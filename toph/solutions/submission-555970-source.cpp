#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<int>aa;
    for (int i = 0; i <n ; ++i) {
        int x;
        cin>>x;
        aa.push_back(x);
    }

    sort(aa.begin(), aa.end());
    cout<<aa[aa.size()-1];


    return 0;
}
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    vector <int> a;
    for (int i = 1; i <= n ; ++i) {
        int x;
        cin>>x;
        a.push_back(x);
    }

    if(is_sorted(a.begin(), a.end()))
        cout<<"Yes";
    else
        cout<<"No";
    //cout<<ans;

    return 0;
}
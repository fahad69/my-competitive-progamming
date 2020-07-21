#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    int t, c = 0;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        if(x>=80)
            c++;
    }
    
    cout<<c;


}
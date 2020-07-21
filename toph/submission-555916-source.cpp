#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string ans = "";
    for (int i = 1; i <= n ; ++i) {
        string s;
        cin>>s;
        if(ans.find(s) == string::npos)
            ans += s;
    }

    cout<<ans;

    return 0;
}
#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);

    string s;cin>>s;int c = 0, c2 = 0;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]>='A' && s[i]<='Z')
            c++;
        if(s[i]>='a' && s[i]<='z')
            c2++;
    }
    cout<<c<<" "<<c2;


    return 0;
}
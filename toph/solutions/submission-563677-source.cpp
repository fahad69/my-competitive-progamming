#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        string s, ans = "";
        cin>>s;
        for (int j = 0; j < s.size(); ++j) {
            if(s[j]=='A')
                ans += 'T';
            if(s[j]=='T')
                ans += 'A';
            if(s[j]=='G')
                ans += 'C';
            if(s[j]=='C')
                ans += 'G';
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
    
}
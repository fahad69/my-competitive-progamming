#include<bits/stdc++.h>

using namespace std;

int main() {


    string s, ans = "";
    cin>>s;
    int count = 0;
    for (int i = s.length()-1; i >= 0 ; i--) {

        if((count)%3==0 && count != 0)
            ans += ',';
        ans += s[i];
        count++;
    }

    reverse(ans.begin(), ans.end());
    cout<<ans;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;



int main() {
    //freopen("out.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int c = 0;
    while(cin>>s)
    {

        for (int i = 0; i < s.length(); ++i) {
            if(s[i]=='m')
                c++;
        }
    }

    cout<<c;


    return 0;
}
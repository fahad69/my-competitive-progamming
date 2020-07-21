
#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("out.txt", "r", stdin);
    int t;
    cin>>t;
    string s;
    cin>>s;
    int flag = 0;
    for (int i = 0; i < t - 1; ++i) {
        if(s[i]==s[i+1])
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
        cout<<"Change needed";
    else
        cout<<"No change needed";





    return 0;
}

#include <bits/stdc++.h>

using namespace std;


int main() {

    //freopen("out.txt", "r", stdin);
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        string s;
        cin>>s;

        for (int j = s.size()/2-1; j >=0 ; j--) {
            cout<<s[j];
        }

        cout<<endl;
    }





    return 0;
}
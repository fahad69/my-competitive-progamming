#include <bits/stdc++.h>
using namespace std;
vector<int> box;


int main()
{
    int n, x, c = 0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin>>s;
        int cu = 0, cp = 0, cc = 0;
        for (int j = 0; j < s.length(); ++j) {
            if(s[j]=='U')
                cu++;
            if(s[j]=='P')
                cp++;
            if(s[j]=='C')
                cc++;
        }

        cc = cc/2;
        cout<<min(min(cc,cu),cp)<<endl;
    }
    //cout<<c;
    return 0;
}
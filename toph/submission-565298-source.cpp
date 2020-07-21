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
        c = 0;
        for (int j = 0; j < s.length(); ++j) {
            c += s[j]-'0';
        }
        cout<<"Case "<<i+1<<": ";
        if(c%2==s.length()%2)
            cout<<"Safe to push\n";
        else
            cout<<"BOOM\n";
    }
    //cout<<c;
    return 0;
}
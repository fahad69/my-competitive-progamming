#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    int flag = 0;
    cin>>s;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < s.length() ; ++i) {
        if(s[i]=='(')
        {
            c1++;
        }
        else if(s[i]==')')
        {
            if(c1==0)
                flag = 1;
            if(c1>0)
                c1--;
        }
    }

    if(flag==0)
    {
        if(c1==0)
            cout<<"Yes";
        else
            cout<<"No";
    } else
        cout<<"No";

    return 0;
}
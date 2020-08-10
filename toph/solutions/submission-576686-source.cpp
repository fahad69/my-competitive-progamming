#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin>>s;
        if(s.find('a')!=string::npos|| s.find('e')!=string::npos ||s.find('i')!=string::npos ||s.find('o')!=string::npos ||s.find('u')!=string::npos)
        cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    
    return 0;
}


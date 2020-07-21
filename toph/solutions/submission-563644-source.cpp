#include <bits/stdc++.h>
using namespace std;


int main()
{

    long long a, b;
    cin>>a>>b;
    long long s = a*b;
    //cout<<s<<endl;
    string ss = to_string(s);
    for (int i = 0; i <ss.size() ; ++i) {
        if(ss[i]=='9')
            cout<<'1'<<'0';
        else
            cout<<++ss[i];
    }

    //cout<<ss;

    return 0;
}
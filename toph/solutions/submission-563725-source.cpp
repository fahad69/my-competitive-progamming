#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        char c;
        cin>>c;
        if(c<='Z' && c>='A')
            cout<<"UPPERCASE\n";
        else
            cout<<"lowercase\n";

    }


}
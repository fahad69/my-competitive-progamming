#include<bits/stdc++.h>

using namespace std;

int main() {


    string a, b;
    cin>>a;

    a[0] = toupper(a[0]);
    for(int i = 0; i<a.length(); i++)
    {
        if(a[i]=='s')
            a[i] = '$';
        if(a[i]=='i')
            a[i] = '!';
        if(a[i]=='o')
        {
            a = a.substr(0, i) + "()" + a.substr(i+1, a.length()-1);
        }

    }
    a += ".";
    cout<<a;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;



int main() {

    string s;
    cin>>s;
    if(s[s.length()-1]=='0')
    {
        while(s[s.length()-1]=='0')
            s.erase(s.length()-1);
        cout<<s<<endl;}
    else
        cout<<s<<endl;

    cout<<"Stay at Home";



    return 0;
}

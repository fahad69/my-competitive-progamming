#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,s);
        //cout<<s<<endl;
        for (int i = 0; i < s.length() - 1; i++) {
            cout<<s[i];
            while(s[i] == s[i+1])
            {
                i++;
                if (i == s.length())
                    break;
            }

        }

        if(s.length()>2 && s[s.length()-1]!=s[s.length()-2])
            cout<<s[s.length()-1];

        if(n>0)
            cout<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    while(getline(cin,s))
    {
        if(s == "the end.")
            break;

        for (int i = 0; i < s.length(); i++) {
            if(s[i] == 'b')
                cout<<'6';
            else if(s[i] == 'g')
                cout<<'9';
            else if(s[i] == 'l')
                cout<<'1';
            else if(s[i] == 'o')
                cout<<'0';

            else if(s[i] == 's')
                cout<<'5';
            else if(s[i] == 'z')
                cout<<'2';
            else if(s[i] == '6')
                cout<<'b';
            else if(s[i] == '9')
                cout<<'g';
            else if(s[i] == '1')
                cout<<'l';
            else if(s[i] == '0')
                cout<<'o';

            else if(s[i] == '5')
                cout<<'s';
            else if(s[i] == '2')
                cout<<'z';
            else
                cout<<s[i];

        }
        cout<<endl;


    }

    return 0;
}
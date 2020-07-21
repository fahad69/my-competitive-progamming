#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int n, y;
    cin>>n;
    string s;
    getchar();
    getline(cin, s);

    //cout<<s<<endl;
    int a[52] = {0};
    for(int i = 0;i <26; i++)
    {
        a[i] = 'a' + i;
    }
    //cout<<"hello";

    for(int i = 26; i < 52; i++)
    {
        a[i] = 'a' + i - 26;
    }

    //printf("%c", a[51]);

    //cout<<"hello";

    for (int j = 0; j < s.length() ; j++) {
        if(s[j]==' ')
            printf(" ");
        else
            printf("%c", a[ s[j] - 'a' + 26 - n]);
    }


    return 0;
}
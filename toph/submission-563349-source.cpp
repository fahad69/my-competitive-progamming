#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; ++i) {
        string s;
        getline(cin, s);
        reverse( s.begin(), s.end() );
        cout<<s<<endl;
    }




    return 0;
}
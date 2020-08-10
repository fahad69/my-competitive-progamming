#include<bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        long double h, s;
        cin>>h>>s;
        printf("\n%.10Lf", (s*s-h*h)/(2*h));
    }
    
    return 0;
}


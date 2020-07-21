#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a, b;
    cin>>a>>b;
    int p = a/2, q;
    if(b%2==0)
        q = b/2;
    else
        q = b/2 + 1;

    cout<<q - p;


}


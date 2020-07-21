#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    
    long long a, b, c;
    char ch;
    cin>>a>>ch>>b>>ch>>c;
    
    a = a+b+c;
    if(a%2==0)
    {
        printf("0+%lld=%lld", a/2, a/2);
    }
    else
        printf("Impossible");

    return 0;
}
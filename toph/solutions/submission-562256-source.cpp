
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c;
    
    cin>>a>>b>>c;
    
    if(b<=a && c<=a)
        cout<<"Chocolate";
    else if(b>a && c>a)
        cout<<"Chocolate";
    else if(b<a)
        cout<<"Chocolate";
    else
        cout<<"Ice-cream";
    

    return 0;
}
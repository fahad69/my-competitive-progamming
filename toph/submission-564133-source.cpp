#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t, x, y, z, m;
    cin>>t>>x>>y>>z>>m;
    
    double time = (x+y+z)/9.0 + m;
    if(time<=t)
        cout<<"YES";
    else 
        cout<<"NO";

}
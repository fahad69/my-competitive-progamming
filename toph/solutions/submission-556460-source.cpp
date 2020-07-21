#include <bits/stdc++.h>

using namespace std;


int main()
{

    
    int n;
    cin>>n;
    for (int i = 0; i < n ; ++i) {
        double r, theta;
        cin>>r>>theta;
        theta = (acos(-1.0)*theta)/180.0;
        cout<<.5*r*r*theta<<endl;
    }
}
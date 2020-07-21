#include <bits/stdc++.h>

using namespace std;



int main()
{
    double a, area;

    cin>>a>>area;

    double l = 20*sqrt(3)*a;
    double h = 5*a;
    double area2 = l*h;
    if(area2>=area)
        cout<<"Yes";
    else
        cout<<"No";


    return 0;
}
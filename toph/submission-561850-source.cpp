#include <bits/stdc++.h>

using namespace std;

double dist(double x1, double y1, double x2, double y2)
{
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int a;
    cin>>a;
    if(a<=30)
        cout<<"Good weather.";
    else if(a>=70)
        cout<<"Bad weather.";
    else
        cout<<"\"Confusing weather.\"";

    return 0;
}
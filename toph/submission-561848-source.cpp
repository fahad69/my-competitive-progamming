#include <bits/stdc++.h>

using namespace std;

double dist(double x1, double y1, double x2, double y2)
{
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(nullptr);


    int t;
    cin>>t;
//    for (int i = 1; i <= t; ++i) {

    int a, b, c, d;
    cin>>a>>b>>c;

    if(t%2==0)
        d = t/2;
    else
        d = t;



    if(t%2==0)
    {
        if(a*t<b*t/2)
        {
            d = t;
            if(d<6)
                c = 0;
            cout<<d*a+c;
        }
        else
        {
            d = t/2;
            if(d<6)
                c= 0;
            cout<<d*b +c;
        }
    }
    else
    {
        if(d<6)
            c = 0;
        cout<<a*t+c;
    }

    //  }


    return 0;
}
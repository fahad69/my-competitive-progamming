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
    for (int i = 1; i <= t; ++i) {

        double ax, ay, bx, by, cx, cy;
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        double dista, distb, distc;
        char x;
        cin>>x;
        if(x=='B')
        {
            distc = dist(ax, ay, cx, cy)/4.0;
            dista = dist(ax, ay, bx, by);
            distb = dist(bx, by, cx, cy);
        }
        else if(x=='C')
        {
            distc = dist(ax, ay, bx, by)/4.0;
            distb = dist(ax, ay, cx, cy);
            dista = dist(bx, by, cx, cy);
        }
        else
        {
            distc = dist(bx, by, cx, cy)/4.0;
            dista = dist(ax, ay, bx, by);
            distb = dist(ax, ay, cx, cy);
        }

        printf("Case %d: %.3lf\n", i, sqrt( (dista+distb)/2.0 -distc ));
    }


    return 0;
}
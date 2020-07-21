#include <bits/stdc++.h>

using namespace std;


int main()
{


    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n ; ++i) {
        double a, area, perimeter, side;
        cin>>a;
        side = sqrt(a)/2.0;
        printf("%.8lf %.8lf\n", a - acos(-1.0)*side*side, 2*acos(-1.0)*side );
    }







}













/*int n;
    scanf("%d", &n);
    for (int i = 1; i <= n ; ++i) {
        double p;
        scanf("%lf", &p);
        printf("Case %d: %.2lf\n", i, 8*p*p-2*3.1416*p*p);
    }*/
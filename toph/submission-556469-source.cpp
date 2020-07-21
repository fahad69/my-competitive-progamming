#include <bits/stdc++.h>

using namespace std;


int main()
{
    
    int a, r1, r2, r3, r4;
    while(cin>>a && cin>>r1 && cin>>r2 && cin>>r3 && cin>>r4)
    {
        double pi = acos(-1.0);
        double ans = a*a - pi*((r1*r1)/4.0 + (r2*r2)/4.0 + (r3*r3)/4.0 + (r4*r4)/4.0);
        printf("%.3lf\n", ans);
    }

    
    
    
    
    
    
    
}













/*int n;
    scanf("%d", &n);
    for (int i = 1; i <= n ; ++i) {
        double p;
        scanf("%lf", &p);
        printf("Case %d: %.2lf\n", i, 8*p*p-2*3.1416*p*p);
    }*/
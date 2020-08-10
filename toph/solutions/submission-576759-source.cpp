#include<bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
         double x, y, a, b;
        cin>>x>>y>>a>>b;
        
         double p = (2*y*a - x*(y-b))/(y+b);
         double q = 0.00;
        printf("%.9lf %.9lf\n", (p+x)/2.0, q);
    }
    
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

long long maxx(long long a, long long b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{


    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t ; ++i) {
        double ab, ad, theta;
        cin>>ab>>ad>>theta;
        double bd2 = ab*ab + ad*ad - cos(theta*acos(-1.0)/180.0)*2*ab*ad;
        double ac2 = 2*(ad*ad + bd2) - ab*ab;
        printf("%.8lf\n", ac2 + ab*ab);
    }








}













/*int n;
    scanf("%d", &n);
    for (int i = 1; i <= n ; ++i) {
        double p;
        scanf("%lf", &p);
        printf("Case %d: %.2lf\n", i, 8*p*p-2*3.1416*p*p);
    }*/
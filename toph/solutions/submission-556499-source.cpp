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

    double smol_area,  ratio;
    cin>>smol_area>>ratio;

    double big_area = ratio*smol_area;
    double smol_r = sqrt(smol_area/acos(-1.0));
    double big_r = sqrt(big_area/acos(-1.0));
    double triangle = smol_r*smol_r;
    double square = 2*big_r*big_r;
    cout<<triangle<<"\n"<<square;




}













/*int n;
    scanf("%d", &n);
    for (int i = 1; i <= n ; ++i) {
        double p;
        scanf("%lf", &p);
        printf("Case %d: %.2lf\n", i, 8*p*p-2*3.1416*p*p);
    }*/
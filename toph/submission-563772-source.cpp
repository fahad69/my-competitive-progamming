#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        long double a, b;
        scanf("%Lf %Lf", &a, &b);
        long double x = (a+b)/2.0;
        printf("%.1Lf\n", x);

    }


}
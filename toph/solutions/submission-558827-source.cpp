#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    scanf("%d", &n);

    for (long long j = 1; j <= n ; ++j) {
        double ad, theta;
        cin>>ad>>theta;
        theta = theta*acos(-1.0)/180.0;
        ad = ad*(1/tan(theta) + 1/sin(theta));
        printf("%lf\n",ad);
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;



int main()
{
    double a, area;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a;

        printf("%.8lf\n", (4*3.141592653589*a*a*a)/3.0);

    }
    

    return 0;
}
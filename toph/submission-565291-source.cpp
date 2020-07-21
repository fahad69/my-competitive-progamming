#include <bits/stdc++.h>
using namespace std;
vector<int> box;


int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {

        double x1, y1, x2, y2, r;
        cin>>x1>>y1>>x2>>y2>>r;
        double x3 = (x1+x2)/2.0;
        double y3 = (y1+y2)/2.0;
        double R = r + sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) )/2.0;
        printf("%.2lf %.2lf %.2lf\n", x3, y3, R);
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double area_rectangle(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;
    double triangle_Area = sqrt(s * (s - a) * (s - b) * (s - c));
    return 2 * triangle_Area;
}

double angle(double a, double b, double c)
{
    double up = b * b + c * c - a * a;
    double down = 2 * b * c;
    double ans = acos(up / down);
    return ans;
}

double arc_area(double r, double theta)
{
    //theta = (theta*M_PI)/180.0;
    return .5 * r * r * theta;
}

int main()
{
    //cout << "Hello, World!" << endl;

    //freopen("in.txt", "r", stdin);
    int cases = 0, T;
    cin >> T;

    for (cases = 1; cases <= T; cases++)
    {
        double x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double dist = distance(x1, y1, x2, y2);
        if (dist >= r1 + r2)
        {
            printf("Case %d: 0\n", cases);
            continue;
        }
        if (fabs(r1 - r2) >= dist)
        {
            double rr = min(r1, r2);
            printf("Case %d: %.9f\n", cases, (acos(-1.0) * rr * rr));
            continue;
        }
        double angle_1 = 2.0 * angle(r2, r1, dist);
        double angle_2 = 2.0 * angle(r1, r2, dist);

        double arc_area_1 = arc_area(r1, angle_1);
        double arc_area_2 = arc_area(r2, angle_2);

        double rectangle = area_rectangle(r1, r2, dist);

        double ans = arc_area_1 + arc_area_2 - rectangle;

        printf("Case %d: %.9f\n", cases, ans);
    }

    return 0;
}
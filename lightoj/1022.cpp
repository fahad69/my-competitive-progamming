#include <stdio.h>
#include <math.h>

int main()
{
    int n, caseno = 0, cases;
    double r, ans, pi = 2 * acos(0.0);
    scanf("%d", &cases);
    while (cases--)
    {
        scanf("%lf", &r);
        ans = 4 * r * r - pi * r * r;

        printf("Case %d: %.2lf\n", ++caseno, ans + 0.000000001);
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    if( b==0 )
        return a;
    return gcd(b, a%b);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t ; ++i) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        if ((b - a) == (c - b)) {
            int res = 0;
            res = a + (n-1)*(b-a);
            printf("Case %d: %d\n", i, res);
        } else
        {
            printf("Case %d: Error\n", i);
        }
    }




}


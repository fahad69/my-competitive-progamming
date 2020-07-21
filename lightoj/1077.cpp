#include <bits/stdc++.h>
using namespace std;

long long calculate(long long a, long long b, long long c, long long d);

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    //freopen("in.txt", "r", stdin);
    int T;
    cin >> T;
    //cout<<T<<endl;
    int count = 0;
    for (int i = 0; i < T; i++)
    {
        count++;
        long long x1, y1, x2, y2;
        long long result = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        result = calculate(x1, y1, x2, y2);
        printf("Case %d: %lld\n", count, result);
    }
    return 0;
}

long long calculate(long long x1, long long y1, long long x2, long long y2)
{
    long long up = y1 - y2;
    long long down = x1 - x2;

    if (up == 0)
        return abs(down) + 1;
    if (down == 0)
        return abs(up) + 1;

    long long divisor = gcd(llabs(up), llabs(down));
    //int new_down = down/divisor;
    //int result = down/new_down;

    return divisor + 1;
}

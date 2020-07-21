#include <bits/stdc++.h>
using namespace std;

long long give(long long a)
{

    if (a % 3 == 0)
        return (a * 2) / 3;
    if (a % 3 == 2)
        return ((a + 1) * 2) / 3 - 1;
    if (a % 3 == 1)
        return ((a + 2) * 2) / 3 - 2;
}

int main()
{
    int T;

    cin >> T;
    int val = 0;

    while (T--)
    {
        long long a, b, c;
        cin >> a >> b;
        if (a % 3 == 1)
            c = give(b) - give(a);
        else
            c = give(b) - give(a) + 1;
        printf("Case %d: %lld\n", ++val, c);
    }
    return 0;
}

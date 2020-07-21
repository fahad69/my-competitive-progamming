#include <bits/stdc++.h>

using namespace std;

long long minn(long long a, long long b)
{
    if (a<b)
        return a;
    else
        return b;
}

long long maxx(long long a, long long b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t ; ++i) {
        long long a, b, c, d;
        scanf("%lld %lld", &a, &b);
        c = minn(a,b);
        d = maxx(a,b);
        if(d%c==0)
            printf("true\n");
        else
            printf("false\n");
    }
    return 0;
}


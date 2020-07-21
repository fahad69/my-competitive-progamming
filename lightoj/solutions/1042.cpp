#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r" , stdin);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        long long x;
        cin >> x;
        long long p = 1;
        int state = 1;

        for (int j = 0; j < 32; j++)
        {
            int q = p << 1;
            if (!(q & x) && (p & x))
            {
                x = x & ~p;
                x = x | q;
                int c = 0;
                int r = p;
                while (r != 0)
                {
                    r = r >> 1;
                    if (x & r)
                    {
                        c++;
                        x = x & ~r;
                    }
                }

                int u = 1;
                for (int t = 0; t < c; t++)
                {
                    x = x | u;
                    u = u << 1;
                }

                break;
            }
            p = p << 1;
        }

        printf("Case %d: %d\n", i + 1, x);
    }

    return 0;
}

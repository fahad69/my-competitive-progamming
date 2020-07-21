#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r" , stdin);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n, p, q;
        cin >> n >> p >> q;
        int a[n];
        int w = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int j = 0;
        for (j = 1; j <= n; j++)
        {
            if (j > p)
            {
                //cout<<"YES";
                break;
            }

            w += a[j - 1];
            if (w > q)
            {
                //cout<<w;
                break;
            }
        }

        printf("Case %d: %d\n", i + 1, j - 1);
    }

    return 0;
}

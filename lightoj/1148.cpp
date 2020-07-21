#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; ++i)
    {
        int n;
        scanf("%d", &n);
        unordered_map<int, int> umap;

        for (int j = 0; j < n; ++j)
        {
            int a;
            scanf("%d", &a);
            if (j == 0)
            {
                umap[a] = 1;
                continue;
            }

            if (umap.find(a) == umap.end())
            {
                umap[a] = 1;
            }
            else
            {
                umap.find(a)->second++;
            }
        }

        long long sum = n;

        for (auto i : umap)
        {
            int a = i.first + 1;
            int b = i.second;
            if (b % a != 0)
            {
                int pp = b % a;
                sum += a - pp;
            }
        }

        printf("Case %d: %lld\n", i, sum);
    }
}

#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b)
{
    return a<b;
}

int main()
{

    int t;
    cin>>t;

    for (int i = 1; i <= t; ++i) {
        int x, s1 = 0, s2 = 0;
        for (int j = 0; j < 6; ++j) {
            cin>>x;
            s1 += x;
        }

        int b;
        cin>>b;

        for (int k = 0; k < 6; ++k) {
            cin>>x;
            s2+=x;
        }

        printf("Case %d: %d\n", i, max(s2-(b-s1),0));
    }

    return 0;
}
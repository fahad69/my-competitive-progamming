#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out2.txt", "w", stdout);
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i)
    {
        int n, q;
        cin >> n >> q;
        list<int> pp[n + 1];
        cout << "Case " << i << ":" << endl;
        for (int j = 0; j < q; ++j)
        {
            string s;
            cin >> s;
            if (s == "push")
            {
                int a, b;
                cin >> a >> b;
                pp[a].push_back(b);
            } else if (s == "top")
            {
                int a;
                cin >> a;
                if (pp[a].empty())
                    cout << "Empty!\n";
                else
                    cout << pp[a].back() << endl;
            } else if (s == "pop")
            {
                int a;
                cin >> a;
                if (!pp[a].empty())
                    pp[a].pop_back();
            } else if (s == "put")
            {
                int x, y;
                cin >> x >> y;
                pp[x].splice(pp[x].end(), pp[y]);
                
            }
        }
    }
    return 0;
}

